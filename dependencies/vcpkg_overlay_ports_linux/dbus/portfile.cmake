# Same deal as the gtk3 and cairo overlays: take D-Bus from the system rather
# than building it here.
#
# The upstream port fetches its tarball from gitlab.freedesktop.org, which has
# been answering 504 for it often enough to fail whole pipelines (all three
# vcpkg retries in a row, twice running). Nothing in Cemu talks to D-Bus
# directly - the only consumer is sdl2[dbus], which dlopen()s libdbus-1 at run
# time and needs no more than the headers to build, so the distro's
# libdbus-1-dev covers it. Where that is missing, SDL2 simply builds without
# D-Bus support, which costs a libretro core nothing: the frontend owns the
# window, the screen saver and the input method.
set(VCPKG_POLICY_EMPTY_PACKAGE enabled)
