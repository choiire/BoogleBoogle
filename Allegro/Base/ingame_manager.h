#ifndef __INGAME_MANAGER_H__
#define __INGAME_MANAGER_H__

typedef struct {
	int score;			/* curr point*/
	int high_score;		// max point
	int stage;			// curr stage num
	int lives;			// num of lives
	int stage_timer;	// 
	int is_stage_clear;	// 
	bool is_game_over;	// is game over?

} stINGAME_MANAGER;

#endif
