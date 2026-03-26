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
#define MAP_1_SIZE_Y  (5)
#define MAP_1_SIZE_X  (10)

	int stage[MAP_1_SIZE_Y][MAP_1_SIZE_X] =
	{ {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{1, 1, 1, 1, 0, 1, 1, 1, 1, 1},
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1} };

	for (int i = 0; i < MAP_1_SIZE_Y; ++i) {
		for (int j = 0; j < MAP_1_SIZE_X; ++j) {
			stPOSITION pos;

			if (stage[i][j] != 0) {
				pos.x = j * 14;
				pos.y = i * 14;
				stTILE_init(&stage1[(i * MAP_1_SIZE_X) + j], &pos);
			}
		}
	}
	
}


