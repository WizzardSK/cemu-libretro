# Rules for coding agents

These apply to any AI agent working in this repository (Claude Code reads them through `CLAUDE.md`). They came out of testing the libretro core with its testers.

## Branches and history

- The `libretro` branch is never deleted, and nothing that rewrites its history is run on it: no force-push, no rebase, no amending or squashing of commits that are already pushed. It is the fork's only long-lived branch; there is no `main`.
- New features and experimental changes go on their own branch (for example `audio-stall`), and testers test builds of that branch. When testing is done, the related commits are squashed and merged into `libretro`, so the main branch does not collect commits that were superseded midway.
- A fix that users of the `libretro` builds need before the branch is merged is cherry-picked into `libretro`, in a way that does not break the later merge of the branch.

## Merging upstream Cemu

This repository builds the libretro core and nothing else. The standalone's parts - the wx GUI, its packaging and workflows, the input backends the frontend replaces (SDL, DSU, keyboard, real Wiimotes, GameCube adapter, XInput, DirectInput), the audio backends (cubeb, XAudio2, DirectSound), Discord RPC, GameMode and upstream's contributor docs - were deleted on purpose, and must not come back with a merge. The paths are listed in `.upstream-excluded`.

- Right after `git merge` of upstream, before resolving anything else, run:
  `git rm -r -q --ignore-unmatch --pathspec-from-file=.upstream-excluded`
  This settles the modify/delete conflicts in favour of the deletion, and it also removes files upstream newly added under those paths, which git would otherwise bring in without any conflict.
- Never resolve a conflict on one of those paths by restoring the file.
- When upstream changes a CMake file around one of the removed options or backends, keep them removed and take the rest of the change.
- When something new is deleted for the same reason, add its path to `.upstream-excluded` in the same commit.

## These files

- Only the developer writes to or deletes `AGENTS.md` and `CLAUDE.md`. An agent does not change them on its own; it proposes the change to the developer instead.

## Code

- Keep comments true. When a change makes a comment describe behaviour that no longer exists, fix or remove the comment in the same commit.
- Look at the big picture, not just the function being changed. For example, resetting the content and closing it have to release the game's resources through the same path; a reset is an unload and a load.
- Stop and join threads the way upstream Cemu does, not with methods made up for the libretro port. The ad-hoc ones are what caused most of the shutdown and reset bugs.
- Every core option has to be connected to something. Do not add an option the core does not read, and remove one that turns out to do nothing.
- `settings.xml` is not used by this core. If you need a setting, use the current `.opt` file (a core option) instead of Cemu's `settings.xml`.

## Testing

- `log.txt` names the commit it was built from, under "Loaded title". Ask testers for `log.txt` and the RetroArch log, and check which commit a log came from before drawing conclusions from it.
