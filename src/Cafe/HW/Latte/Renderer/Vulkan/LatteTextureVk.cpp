#include "Cafe/HW/Latte/Renderer/Vulkan/LatteTextureVk.h"
#include "Cafe/HW/Latte/Renderer/Vulkan/LatteTextureViewVk.h"
#include "Cafe/HW/Latte/Renderer/Vulkan/VulkanRenderer.h"
#include "Cafe/HW/Latte/Renderer/Vulkan/VulkanAPI.h"

// How much texture memory is resident, and how much of it is the price of not
// being able to sample BC. On a device whose driver reports no BC format, a
// BC1 texture is decompressed to RGBA8 before upload and then occupies eight
// times what the title stored - which is a memory and bandwidth cost on
// exactly the hardware with least of both. Counting it here rather than
// guessing at it: LatteTextureVk is where the guest format and the format
// actually allocated are both known, and the allocator's own size is what the
// heap will be asked for.
//
// Reported on the TextureCache log channel, so it costs nothing unless asked
// for. See issue #22.
namespace
{
	uint64 s_residentTextureBytes = 0;    // every texture, whatever the format
	uint64 s_residentDecodedBcBytes = 0;  // of those, the ones BC was decoded into
	uint64 s_bcBytesIfKept = 0;           // what those would have taken as BC
	uint64 s_peakResidentBytes = 0;
	uint64 s_lastReportedBytes = 0;

	// The same split per BC format, because the total cannot say whether
	// anything is worth narrowing. BC3's alpha is an 8-bit ramp and has
	// nowhere smaller to go, so bytes sitting in BC3 are bytes that stay;
	// BC1's alpha is one bit and BC2's is four, which do have somewhere.
	enum BcKind { BcKind_1, BcKind_2, BcKind_3, BcKind_4, BcKind_5, BcKind_Count, BcKind_None = -1 };
	const char* const s_bcKindName[BcKind_Count] = { "BC1", "BC2", "BC3", "BC4", "BC5" };
	uint64 s_residentByKind[BcKind_Count] = {};
	uint64 s_bcBytesByKind[BcKind_Count] = {};

	int BcKindOf(Latte::E_GX2SURFFMT format)
	{
		switch (format)
		{
		case Latte::E_GX2SURFFMT::BC1_UNORM:
		case Latte::E_GX2SURFFMT::BC1_SRGB:
			return BcKind_1;
		case Latte::E_GX2SURFFMT::BC2_UNORM:
		case Latte::E_GX2SURFFMT::BC2_SRGB:
			return BcKind_2;
		case Latte::E_GX2SURFFMT::BC3_UNORM:
		case Latte::E_GX2SURFFMT::BC3_SRGB:
			return BcKind_3;
		case Latte::E_GX2SURFFMT::BC4_UNORM:
		case Latte::E_GX2SURFFMT::BC4_SNORM:
			return BcKind_4;
		case Latte::E_GX2SURFFMT::BC5_UNORM:
		case Latte::E_GX2SURFFMT::BC5_SNORM:
			return BcKind_5;
		default:
			return BcKind_None;
		}
	}

	// Whether the image really is a block format. FormatInfoVK::isCompressed
	// cannot answer this - it is initialised to false and never set anywhere -
	// so ask the format that was actually chosen.
	bool IsBlockFormat(VkFormat fmt)
	{
		return fmt >= VK_FORMAT_BC1_RGB_UNORM_BLOCK && fmt <= VK_FORMAT_BC7_SRGB_BLOCK;
	}

	// A BC image's size in bytes: whole 4x4 blocks, over every mip and layer.
	uint64 BcNominalSize(Latte::E_GX2SURFFMT format, uint32 width, uint32 height, uint32 mipLevels, uint32 layers)
	{
		uint32 blockBytes;
		switch (BcKindOf(format))
		{
		case BcKind_1:
		case BcKind_4:
			blockBytes = 8;
			break;
		case BcKind_2:
		case BcKind_3:
		case BcKind_5:
			blockBytes = 16;
			break;
		default:
			return 0;
		}
		uint64 total = 0;
		for (uint32 mip = 0; mip < std::max(mipLevels, 1u); mip++)
		{
			const uint32 w = std::max(width >> mip, 1u);
			const uint32 h = std::max(height >> mip, 1u);
			total += (uint64)((w + 3) / 4) * ((h + 3) / 4) * blockBytes;
		}
		return total * std::max(layers, 1u);
	}

	void ReportTextureMemory()
	{
		if (!cemuLog_isLoggingEnabled(LogType::TextureCache))
			return;
		// Only when it has moved enough to be worth a line - a title creates
		// and drops textures constantly and every one of them would log.
		const uint64 delta = s_residentTextureBytes > s_lastReportedBytes
			? s_residentTextureBytes - s_lastReportedBytes
			: s_lastReportedBytes - s_residentTextureBytes;
		if (delta < 16ull * 1024 * 1024)
			return;
		s_lastReportedBytes = s_residentTextureBytes;
		const uint64 saved = s_residentDecodedBcBytes > s_bcBytesIfKept ? s_residentDecodedBcBytes - s_bcBytesIfKept : 0;
		cemuLog_log(LogType::TextureCache,
			"texture memory: {} MiB resident (peak {} MiB), of which {} MiB is decompressed BC that would be {} MiB compressed - {} MiB, {}% of all texture memory, is the cost of having no BC",
			s_residentTextureBytes / 1024 / 1024, s_peakResidentBytes / 1024 / 1024,
			s_residentDecodedBcBytes / 1024 / 1024, s_bcBytesIfKept / 1024 / 1024,
			saved / 1024 / 1024,
			s_residentTextureBytes ? (saved * 100 / s_residentTextureBytes) : 0);
		// Per format, in KiB: the totals cannot say where the cost sits, and
		// which formats hold it decides whether narrowing any of them is worth
		// doing at all.
		for (int kind = 0; kind < BcKind_Count; kind++)
		{
			if (s_residentByKind[kind] == 0)
				continue;
			cemuLog_log(LogType::TextureCache,
				"  {}: {} KiB decompressed, {} KiB as {} - costs {} KiB ({}x)",
				s_bcKindName[kind], s_residentByKind[kind] / 1024, s_bcBytesByKind[kind] / 1024,
				s_bcKindName[kind],
				(s_residentByKind[kind] - std::min(s_residentByKind[kind], s_bcBytesByKind[kind])) / 1024,
				s_bcBytesByKind[kind] ? fmt::format("{:.1f}", (double)s_residentByKind[kind] / (double)s_bcBytesByKind[kind]) : std::string("-"));
		}
	}
}

LatteTextureVk::LatteTextureVk(class VulkanRenderer* vkRenderer, Latte::E_DIM dim, MPTR physAddress, MPTR physMipAddress, Latte::E_GX2SURFFMT format, uint32 width, uint32 height, uint32 depth, uint32 pitch, uint32 mipLevels, uint32 swizzle,
	Latte::E_HWTILEMODE tileMode, bool isDepth)
	: LatteTexture(dim, physAddress, physMipAddress, format, width, height, depth, pitch, mipLevels, swizzle, tileMode, isDepth), m_vkr(vkRenderer)
{
	vkObjTex = new VKRObjectTexture();

	VkImageCreateInfo imageInfo{};
	imageInfo.sType = VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO;
	
	sint32 effectiveBaseWidth = width;
	sint32 effectiveBaseHeight = height;
	sint32 effectiveBaseDepth = depth;
	if (overwriteInfo.hasResolutionOverwrite)
	{
		effectiveBaseWidth = overwriteInfo.width;
		effectiveBaseHeight = overwriteInfo.height;
		effectiveBaseDepth = overwriteInfo.depth;
	}
	effectiveBaseDepth = std::max(1, effectiveBaseDepth);

	imageInfo.extent.width = effectiveBaseWidth;
	imageInfo.extent.height = effectiveBaseHeight;
	imageInfo.mipLevels = mipLevels;
	imageInfo.usage = VK_IMAGE_USAGE_TRANSFER_SRC_BIT | VK_IMAGE_USAGE_TRANSFER_DST_BIT | VK_IMAGE_USAGE_SAMPLED_BIT;
	imageInfo.sharingMode = VK_SHARING_MODE_EXCLUSIVE;
	imageInfo.samples = VK_SAMPLE_COUNT_1_BIT;

	if (dim == Latte::E_DIM::DIM_3D)
	{
		imageInfo.extent.depth = effectiveBaseDepth;
		imageInfo.arrayLayers = 1;
		imageInfo.flags |= VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT;
	}
	else
	{
		imageInfo.extent.depth = 1;
		imageInfo.arrayLayers = effectiveBaseDepth;
		if (dim != Latte::E_DIM::DIM_1D && (effectiveBaseDepth % 6) == 0 && effectiveBaseWidth == effectiveBaseHeight)
			imageInfo.flags |= VK_IMAGE_CREATE_CUBE_COMPATIBLE_BIT;
	}
	
	VulkanRenderer::FormatInfoVK texFormatInfo;
	vkRenderer->GetTextureFormatInfoVK(format, isDepth, dim, effectiveBaseWidth, effectiveBaseHeight, &texFormatInfo);
	cemu_assert_debug(hasStencil == ((texFormatInfo.vkImageAspect & VK_IMAGE_ASPECT_STENCIL_BIT) != 0));
	imageInfo.format = texFormatInfo.vkImageFormat;
	vkObjTex->m_imageAspect = texFormatInfo.vkImageAspect;
	
	if (isDepth == false && texFormatInfo.isCompressed)
	{
		imageInfo.flags |= VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT;
	}
	if (isDepth == false)
		imageInfo.flags |= VK_IMAGE_CREATE_MUTABLE_FORMAT_BIT;

	if (isDepth)
	{
		imageInfo.usage |= VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT;
	}
	else
	{
		if(Latte::IsCompressedFormat(format) == false && texFormatInfo.vkImageFormat != VK_FORMAT_R4G4_UNORM_PACK8) // Vulkan's R4G4 cant be used as a color attachment
			imageInfo.usage |= VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT;
	}

	if (m_vkr->UseAttachmentFeedbackLoop() && (imageInfo.usage & (VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT | VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT)) != 0)
	{
		imageInfo.usage |= VK_IMAGE_USAGE_ATTACHMENT_FEEDBACK_LOOP_BIT_EXT;
		m_defaultLayout = VK_IMAGE_LAYOUT_ATTACHMENT_FEEDBACK_LOOP_OPTIMAL_EXT;
	}

	if (dim == Latte::E_DIM::DIM_2D)
		imageInfo.imageType = VK_IMAGE_TYPE_2D;
	else if (dim == Latte::E_DIM::DIM_1D)
		imageInfo.imageType = VK_IMAGE_TYPE_1D;
	else if (dim == Latte::E_DIM::DIM_3D)
		imageInfo.imageType = VK_IMAGE_TYPE_3D;
	else if (dim == Latte::E_DIM::DIM_2D_ARRAY)
		imageInfo.imageType = VK_IMAGE_TYPE_2D;
	else if (dim == Latte::E_DIM::DIM_CUBEMAP)
		imageInfo.imageType = VK_IMAGE_TYPE_2D;
	else if (dim == Latte::E_DIM::DIM_2D_MSAA)
		imageInfo.imageType = VK_IMAGE_TYPE_2D;
	else
	{
		cemu_assert_unimplemented();
	}

	if (vkCreateImage(m_vkr->GetLogicalDevice(), &imageInfo, nullptr, &vkObjTex->m_image) != VK_SUCCESS)
		m_vkr->UnrecoverableError("Failed to create texture image");
	
	if (m_vkr->IsDebugMarkersEnabled())
	{
		VkDebugUtilsObjectNameInfoEXT objName{};
		objName.sType = VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT;
		objName.objectType = VK_OBJECT_TYPE_IMAGE;
		objName.pNext = nullptr;
		objName.objectHandle = (uint64_t)vkObjTex->m_image;
		auto objNameStr = fmt::format("tex_{:08x}_fmt{:04x}_tm{:x}", physAddress, (uint32)format, (uint32)tileMode);
		objName.pObjectName = objNameStr.c_str();
		vkSetDebugUtilsObjectNameEXT(m_vkr->GetLogicalDevice(), &objName);
	}

	vkObjTex->m_flags = imageInfo.flags;
	vkObjTex->m_format = imageInfo.format;

	{
		// The size the heap will be asked for, which is the honest number -
		// it carries whatever the driver adds for tiling and alignment.
		VkMemoryRequirements memRequirements{};
		vkGetImageMemoryRequirements(m_vkr->GetLogicalDevice(), vkObjTex->m_image, &memRequirements);
		m_residentBytes = memRequirements.size;
		s_residentTextureBytes += m_residentBytes;
		if (s_residentTextureBytes > s_peakResidentBytes)
			s_peakResidentBytes = s_residentTextureBytes;
		// A guest format that is BC, allocated as something that is not, is a
		// texture that took the decompression fallback.
		if (Latte::IsCompressedFormat(format) && !IsBlockFormat(imageInfo.format))
		{
			m_bcBytesIfKept = BcNominalSize(format, effectiveBaseWidth, effectiveBaseHeight, mipLevels, imageInfo.arrayLayers);
			s_residentDecodedBcBytes += m_residentBytes;
			s_bcBytesIfKept += m_bcBytesIfKept;
			m_bcKind = BcKindOf(format);
			if (m_bcKind >= 0)
			{
				s_residentByKind[m_bcKind] += m_residentBytes;
				s_bcBytesByKind[m_bcKind] += m_bcBytesIfKept;
			}
		}
		ReportTextureMemory();
	}

	// init layout array
	m_layoutsMips = std::max(mipLevels, 1u); // todo - use effective mip count
	m_layoutsDepth = std::max(depth, 1u);
	if (Is3DTexture())
		m_layouts.resize(m_layoutsMips, VK_IMAGE_LAYOUT_UNDEFINED); // one per mip
	else
		m_layouts.resize(m_layoutsMips * m_layoutsDepth, VK_IMAGE_LAYOUT_UNDEFINED); // one per layer per mip
}

LatteTextureVk::~LatteTextureVk()
{
	cemu_assert_debug(views.empty());

	s_residentTextureBytes -= m_residentBytes;
	if (m_bcBytesIfKept != 0)
	{
		s_residentDecodedBcBytes -= m_residentBytes;
		s_bcBytesIfKept -= m_bcBytesIfKept;
		if (m_bcKind >= 0)
		{
			s_residentByKind[m_bcKind] -= m_residentBytes;
			s_bcBytesByKind[m_bcKind] -= m_bcBytesIfKept;
		}
	}

	m_vkr->surfaceCopy_notifyTextureRelease(this);

	VulkanRenderer::GetInstance()->ReleaseDestructibleObject(vkObjTex);
	vkObjTex = nullptr;
}

LatteTextureView* LatteTextureVk::CreateView(Latte::E_DIM dim, Latte::E_GX2SURFFMT format, sint32 firstMip, sint32 mipCount, sint32 firstSlice, sint32 sliceCount)
{
	cemu_assert_debug(mipCount > 0);
	cemu_assert_debug(sliceCount > 0);
	cemu_assert_debug((firstMip + mipCount) <= this->mipLevels);
	cemu_assert_debug((firstSlice + sliceCount) <= this->depth);
	return new LatteTextureViewVk(m_vkr->GetLogicalDevice(), this, dim, format, firstMip, mipCount, firstSlice, sliceCount);
}

void LatteTextureVk::AllocateOnHost()
{
	auto allocationInfo = VulkanRenderer::GetInstance()->GetMemoryManager()->imageMemoryAllocate(GetImageObj()->m_image);
	vkObjTex->m_allocation = allocationInfo;
}
