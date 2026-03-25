#ifndef __ENEMY_H__
#define __ENEMY_H__
#include "object.h"

typedef enum {
	eENEMY_STATE_IDLE = 0,
	eENEMY_STATE_MOVE,
	eENEMY_STATE_JUMP,
	eENEMY_STATE_ATTACK,
	eENEMY_STATE_TRAPPED,
	eENEMY_STATE_DEAD,
	eENEMY_STATE_MAX		// no mean. number of STATE
} eENEMY_STATE;

typedef enum {
	eENEMY_TYPE_BASIC = 0,	// normal mob
	eENEMY_TYPE_THROW,		// throw mob
	eENEMY_TYPE_BOSS		// boss mob
}eENEMY_TYPE;

typedef struct {
	/* OBJECT */
	stOBJECT		obj;
	eENEMY_STATE	state;
	eENEMY_TYPE		type;	// type of mob
	
	int state_timer;		//
	int proximity_to_player;// just in case
	int trapped_timer;		// count down of bubble escape
	bool is_angry;			// angry state
	
} stENEMY;

typedef struct {
	stOBJECT obj;
	int damage;			// damage
	int lifetime_timer;	// obj disappear timer
	// i added cause it's simple then calc map boundary
	//int owner_tag;		// it make use eENEMY_THROW both player n mob

}eENEMY_THROW;



#endif
