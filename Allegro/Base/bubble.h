#ifndef __BUBBLE_H__
#define __BUBBLE_H__

#include <stdbool.h>
#include "object.h"
#include "player.h"

#define BUBBLE_SPEED    (3.0)
#define BUBBLE_UP_SPEED (-0.8)    

typedef enum _bubble_state {

    eBUBBLE_STATE_SHOOTING = 0, 
    eBUBBLE_STATE_FLOAT,       
    eBUBBLE_STATE_POP,
    eBUBBLE_STATE_MAX,

}eBUBBLE_STATE;


typedef struct _bubble
{
    stOBJECT obj;
    int frame;        
    int dur;          
    eBUBBLE_STATE state;
} stBUBBLE;

/* Initialize the bubble pool */
void bubble_init(stBUBBLE* bubbles);

/* Create a new bubble at player position */
bool bubble_add(stPLAYER* player, stBUBBLE* bubbles);

/* Manage bubble states and life timers */
void bubble_update(stBUBBLE* bubbles);

/* Update movement and animation frames */
void bubble_update_frame(stBUBBLE* bubbles);


#endif
