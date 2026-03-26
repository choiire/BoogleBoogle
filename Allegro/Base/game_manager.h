#ifndef __GAME_MANAGER_H__
#define __GAME_MANAGER_H__

#include "bugglebuggle.h"
#include "object.h"

/* Need to apply map.c */
void GAME_MANAGER_InitStageObject(eGAME_STAGE stage, stOBJECT *obj);
void GAME_MANAGER_CheckCollision(void);

void GAME_MANAGER_SetStage(eGAME_STAGE stage);

#endif
