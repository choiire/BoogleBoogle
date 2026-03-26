#include "game_manager.h"
#include "player.h"
#include "enemy.h"
#include "map.h"

/* Collision */
stPLAYER player[CONFIG_OBJECT_PLAYER_MAX];
stOBJECT bubble[CONFIG_OBJECT_BUBBLE_MAX];
stENEMY enemy[CONFIG_OBJECT_ENEMY_MAX];
stOBJECT enemy_attack[CONFIG_OBJECT_ENEMY_ATTACK_MAX];
stTILE map[CONFIG_OBJECT_MAP_MAX];

void GAME_MANAGER_InitStageObject(eGAME_STAGE stage, stOBJECT *obj)
{
	/*
		apply collision table
	*/
}

void GAME_MANAGER_CheckCollision(void)
{

}

void GAME_MANAGER_SetStage(eGAME_STAGE stage)
{
	switch (stage) {
	case eGAME_STAGE_1:
		{
			map_init_stage1();
		}
		break;
	default:
		break;
	}
}