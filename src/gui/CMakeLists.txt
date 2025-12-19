add_library(CemuGui INTERFACE)
target_include_directories(CemuGui INTERFACE "interface")

if(ENABLE_WXWIDGETS)
    add_subdirectory(wxgui)
    target_link_libraries(CemuGui INTERFACE CemuWxGui)
else()
    add_library(CemuHeadlessGui STATIC
        headless/HeadlessWindowSystem.cpp
    )
    set_property(TARGET CemuHeadlessGui PROPERTY MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")
    target_include_directories(CemuHeadlessGui PUBLIC "interface")
    target_link_libraries(CemuHeadlessGui PRIVATE CemuCommon)

    target_link_libraries(CemuGui INTERFACE CemuHeadlessGui)
endif()
