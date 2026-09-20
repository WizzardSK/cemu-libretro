# Same as the Linux overlay's: nothing in Cemu talks to D-Bus directly - the
# only consumer is SDL, which dlopen()s libdbus-1 at run time and needs no more
# than the headers to build - and the upstream port fetches its tarball from
# gitlab.freedesktop.org, which has answered 504 often enough to fail whole
# pipelines. webOS has no session bus at all, so there is nothing to talk to
# either way.
set(VCPKG_POLICY_EMPTY_PACKAGE enabled)
