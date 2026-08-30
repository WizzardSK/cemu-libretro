#include "Cafe/OS/common/OSCommon.h"
#include "avm.h"

namespace avm
{
	bool AVMIsHDCPAvailable()
	{
		return true;
	}

	bool AVMIsHDCPOn()
	{
		return true;
	}

	bool AVMGetAnalogContentsProtectionEnable(uint32be* isEnable)
	{
		*isEnable = 1;
		return false;
	}

	bool AVMIsAnalogContentsProtectionOn()
	{
		return true;
	}

	bool AVMSetAnalogContentsProtectionEnable(sint32 newState)
	{
		return true;  // returns 1 (true) if new state was applied successfully?
	}

	class : public COSModule
	{
		public:
		std::string_view GetName() override
		{
			return "avm";
		}

		void RPLMapped() override
		{
			cafeExportRegister("avm", AVMIsHDCPAvailable, LogType::SysApi);
			cafeExportRegister("avm", AVMIsHDCPOn, LogType::SysApi);
			cafeExportRegister("avm", AVMGetAnalogContentsProtectionEnable, LogType::SysApi);
			cafeExportRegister("avm", AVMIsAnalogContentsProtectionOn, LogType::SysApi);
			cafeExportRegister("avm", AVMSetAnalogContentsProtectionEnable, LogType::SysApi);
		};
	}s_COSavmModule;

	COSModule* GetModule()
	{
		return &s_COSavmModule;
	}
}
