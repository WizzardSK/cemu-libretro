# Android-only overlay: the baseline's fmt is 11.0.2, whose own headers use
# FMT_STRING() in ways the NDK's clang rejects ("call to consteval function ...
# is not a constant expression"). Upstream fixed that after 11.0.2, so build a
# newer release here. Every other platform keeps the baseline version.
vcpkg_from_github(
    OUT_SOURCE_PATH SOURCE_PATH
    REPO fmtlib/fmt
    REF "${VERSION}"
    SHA512 573b7de1bd224b7b1b60d44808a843db35d4bc4634f72a9edcb52cf68e99ca66c744fd5d5c97b4336ba70b94abdabac5fc253b245d0d5cd8bbe2a096bf941e39
    HEAD_REF master
)

vcpkg_cmake_configure(
    SOURCE_PATH "${SOURCE_PATH}"
    OPTIONS
        -DFMT_CMAKE_DIR=share/fmt
        -DFMT_TEST=OFF
        -DFMT_DOC=OFF
)

vcpkg_cmake_install()
vcpkg_copy_pdbs()
vcpkg_cmake_config_fixup(CONFIG_PATH share/fmt)

file(REMOVE_RECURSE "${CURRENT_PACKAGES_DIR}/debug/include" "${CURRENT_PACKAGES_DIR}/debug/share")

vcpkg_install_copyright(FILE_LIST "${SOURCE_PATH}/LICENSE")
configure_file("${CMAKE_CURRENT_LIST_DIR}/usage" "${CURRENT_PACKAGES_DIR}/share/${PORT}/usage" COPYONLY)
