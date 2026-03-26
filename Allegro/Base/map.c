#include "map.h"


stTILE stage1[100];
stTILE* map_get_stage_tile(int stage)
{
	return stage1;
}


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

void map_init_stage1() {
	/*int stage1[5][10] =
	{ {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1} };*/

	for (int i = 0; i < 10; ++i) {
		stPOSITION pos;
		/*int* stage = stage1;*/

		/*if (stage[i] != 0) {*/
			
		pos.x = i * 14;
		pos.y = i * 14;
		stTILE_init(&stage1[i], &pos);
		//}
	}
	
}


