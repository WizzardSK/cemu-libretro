#pragma once

// Downloads the latest community graphic packs into
// graphicPacks/downloadedGraphicPacks when there is a newer release than the
// one there. Blocks, with short timeouts; checks at most once a day.
void LibretroGraphicPacks_Update();
