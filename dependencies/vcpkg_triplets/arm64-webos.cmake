# webOS aarch64, for the libretro core's buildbot job.
#
# vcpkg builds each port with the toolchain its triplet names, not with the one
# the top-level CMakeLists chainloads - that reaches try_compile and nothing
# else - so the SDK's toolchain file has to be handed over here or every port
# would be built for the host. The path comes from the environment because it
# belongs to the image, not to the tree: sourcing the SDK's environment-setup
# exports CMAKE_TOOLCHAIN_FILE, and WEBOS_CMAKE_TOOLCHAIN_FILE overrides it for
# anyone whose environment already carries a different one.
set(VCPKG_TARGET_ARCHITECTURE arm64)
set(VCPKG_CRT_LINKAGE dynamic)
set(VCPKG_LIBRARY_LINKAGE static)
set(VCPKG_CMAKE_SYSTEM_NAME Linux)

if(DEFINED ENV{WEBOS_CMAKE_TOOLCHAIN_FILE})
	set(VCPKG_CHAINLOAD_TOOLCHAIN_FILE "$ENV{WEBOS_CMAKE_TOOLCHAIN_FILE}")
elseif(DEFINED ENV{CMAKE_TOOLCHAIN_FILE})
	set(VCPKG_CHAINLOAD_TOOLCHAIN_FILE "$ENV{CMAKE_TOOLCHAIN_FILE}")
else()
	message(FATAL_ERROR "arm64-webos: no webOS toolchain file in the environment - source the SDK's environment-setup, or set WEBOS_CMAKE_TOOLCHAIN_FILE")
endif()

# The ports that look for their dependencies through pkg-config (curl first)
# do not find the SDK's one on their own: the SDK's toolchain file points
# find_program at the target sysroot, and pkg-config is a host tool. The job
# puts its path in WEBOS_PKG_CONFIG.
if(DEFINED ENV{WEBOS_PKG_CONFIG})
	list(APPEND VCPKG_CMAKE_CONFIGURE_OPTIONS "-DPKG_CONFIG_EXECUTABLE=$ENV{WEBOS_PKG_CONFIG}")
endif()
