# Rules for coding agents

These apply to any AI agent working in this repository (Claude Code reads them through `CLAUDE.md`). They came out of testing the libretro core with its testers.

## Branches and history

- The `main` and `libretro` branches are never deleted, and nothing that rewrites their history is run on them: no force-push, no rebase, no amending or squashing of commits that are already pushed.
- New features and experimental changes go on their own branch (for example `audio-stall`), and testers test builds of that branch. When testing is done, the related commits are squashed and merged into `libretro`, so the main branch does not collect commits that were superseded midway.
- A fix that users of the `libretro` builds need before the branch is merged is cherry-picked into `libretro`, in a way that does not break the later merge of the branch.

## These files

- Only the developer writes to or deletes `AGENTS.md` and `CLAUDE.md`. An agent does not change them on its own; it proposes the change to the developer instead.

## Code

- Keep comments true. When a change makes a comment describe behaviour that no longer exists, fix or remove the comment in the same commit.
- Look at the big picture, not just the function being changed. For example, resetting the content and closing it have to release the game's resources through the same path; a reset is an unload and a load.
- Stop and join threads the way upstream Cemu does, not with methods made up for the libretro port. The ad-hoc ones are what caused most of the shutdown and reset bugs.
- Every core option has to be connected to something. Do not add an option the core does not read, and remove one that turns out to do nothing.

## Testing

- `log.txt` names the commit it was built from, under "Loaded title". Ask testers for `log.txt` and the RetroArch log, and check which commit a log came from before drawing conclusions from it.
