#include "map.h"


stTILE* stTILE_init(stTILE* tile, stPOSITION* pos)
{
	tile->obj = (stOBJECT){
		.coll = (stCOLLISION){
			.is_static = true,
			.tag = eOBJ_TAG_TILE,
			.box = (stCOLLISION_BOX){
				.height	= MAP_TILE_SIZE,
				.width	= MAP_TILE_SIZE
			},
		},
		.phy.pos = *pos
	};

	return tile;
}