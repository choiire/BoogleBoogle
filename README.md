# 🎮 BuggleBuggle — Complete API Reference Guide

Notion: https://www.notion.so/28a76aa2918583538e44016cd0ba633d?source=copy_link

video: https://www.dropbox.com/scl/fi/nuf032o0k779io3k3r97k/.mp4?rlkey=5hfq4dgct76wu1m2v368ndjn9&st=qqfj26ap&dl=0



> **Project:** BuggleBuggle — C-based 2D Platformer Arcade Game using Allegro5  
> **Version:** v1.0 | **Language:** C (C99) | **Dependencies:** Allegro5, SQLite3

-----

## 📑 Table of Contents

  - [🎮 BuggleBuggle — Complete API Reference Guide](https://www.google.com/search?q=%23-bugglebuggle--complete-api-reference-guide)
      - [📑 Table of Contents](https://www.google.com/search?q=%23-table-of-contents)
      - [System Architecture & Execution Flow](https://www.google.com/search?q=%23system-architecture--execution-flow)
          - [Overall Game State Flow](https://www.google.com/search?q=%23overall-game-state-flow)
          - [Game State Transition Diagram](https://www.google.com/search?q=%23game-state-transition-diagram)
          - [Update Order Per Frame (INGAME)](https://www.google.com/search?q=%23update-order-per-frame-ingame)
      - [Global Configuration Constants](https://www.google.com/search?q=%23global-configuration-constants)
          - [System Settings](https://www.google.com/search?q=%23system-settings)
          - [Game Settings](https://www.google.com/search?q=%23game-settings)
          - [Physics Settings](https://www.google.com/search?q=%23physics-settings)
          - [Object Pool Settings](https://www.google.com/search?q=%23object-pool-settings)
          - [Enumerations (Enums)](https://www.google.com/search?q=%23enumerations-enums)
      - [Core Data Structures](https://www.google.com/search?q=%23core-data-structures)
          - [Derived Structure Hierarchy](https://www.google.com/search?q=%23derived-structure-hierarchy)
      - [Main Loop & Game Manager](https://www.google.com/search?q=%23main-loop--game-manager)
          - [`main`](https://www.google.com/search?q=%23main)
          - [`GAME_MANAGER_UpdateState`](https://www.google.com/search?q=%23game_manager_updatestate)
          - [`GAME_MANAGER_SetGameState`](https://www.google.com/search?q=%23game_manager_setgamestate)
          - [`GAME_MANAGER_GetGameStage`](https://www.google.com/search?q=%23game_manager_getgamestage)
          - [`GAME_MANAGER_SetGameStage_Next`](https://www.google.com/search?q=%23game_manager_setgamestage_next)
          - [`GAME_MANAGER_UpdateStage`](https://www.google.com/search?q=%23game_manager_updatestage)
          - [`GAME_MANAGER_GetScore`](https://www.google.com/search?q=%23game_manager_getscore)
          - [`GAME_MANAGER_IsLoading`](https://www.google.com/search?q=%23game_manager_isloading)
          - [`GAME_MANAGER_GetPlayer`](https://www.google.com/search?q=%23game_manager_getplayer)
          - [`GAME_MANAGER_GetBubble`](https://www.google.com/search?q=%23game_manager_getbubble)
          - [`GAME_MANAGER_GetEnemy`](https://www.google.com/search?q=%23game_manager_getenemy)
          - [`GAME_MANAGER_GetEnemyAttacks`](https://www.google.com/search?q=%23game_manager_getenemyattacks)
          - [`GAME_MANAGER_GetMap`](https://www.google.com/search?q=%23game_manager_getmap)
          - [`GAME_MANAGER_CheckCollision`](https://www.google.com/search?q=%23game_manager_checkcollision)
          - [`GAME_MANAGER_UpdatePhysics`](https://www.google.com/search?q=%23game_manager_updatephysics)
          - [`GAME_MANAGER_UpdateObject`](https://www.google.com/search?q=%23game_manager_updateobject)
      - [Keyboard Module](https://www.google.com/search?q=%23keyboard-module)
          - [Key State Flags](https://www.google.com/search?q=%23key-state-flags)
          - [`init_keyboard`](https://www.google.com/search?q=%23init_keyboard)
          - [`keyboard_update`](https://www.google.com/search?q=%23keyboard_update)
          - [`keyboard_processing_main`](https://www.google.com/search?q=%23keyboard_processing_main)
          - [`keyboard_processing_ingame`](https://www.google.com/search?q=%23keyboard_processing_ingame)
          - [`keyboard_processing_name`](https://www.google.com/search?q=%23keyboard_processing_name)
          - [`keyboard_processing_score`](https://www.google.com/search?q=%23keyboard_processing_score)
          - [`keyboard_get_name`](https://www.google.com/search?q=%23keyboard_get_name)
      - [Physics & Collision](https://www.google.com/search?q=%23physics--collision)
          - [`stOBJECT_UpdatePhysics`](https://www.google.com/search?q=%23stobject_updatephysics)
          - [`Collide_Object_Tile`](https://www.google.com/search?q=%23collide_object_tile)
          - [`Collide_Enemy_Player`](https://www.google.com/search?q=%23collide_enemy_player)
          - [`Collide_Object_Bubble`](https://www.google.com/search?q=%23collide_object_bubble)
      - [Map Module](https://www.google.com/search?q=%23map-module)
          - [Map Data Structures](https://www.google.com/search?q=%23map-data-structures)
          - [`stTILE_init`](https://www.google.com/search?q=%23sttile_init)
          - [`map_init_stage`](https://www.google.com/search?q=%23map_init_stage)
          - [`MAP_1_GetData`](https://www.google.com/search?q=%23map_1_getdata)
          - [`MAP_2_GetData`](https://www.google.com/search?q=%23map_2_getdata)
          - [`MAP_3_GetData`](https://www.google.com/search?q=%23map_3_getdata)
      - [Player Module](https://www.google.com/search?q=%23player-module)
          - [`stPLAYER` Structure](https://www.google.com/search?q=%23stplayer-structure)
          - [`init_player`](https://www.google.com/search?q=%23init_player)
          - [`player_update_input`](https://www.google.com/search?q=%23player_update_input)
          - [`player_update_frame`](https://www.google.com/search?q=%23player_update_frame)
      - [Enemy Module](https://www.google.com/search?q=%23enemy-module)
          - [`stENEMY` Structure](https://www.google.com/search?q=%23stenemy-structure)
          - [Characteristics by Enemy Type](https://www.google.com/search?q=%23characteristics-by-enemy-type)
          - [`Enemy_Create`](https://www.google.com/search?q=%23enemy_create)
          - [`Enemy_Update` / `Enemy_Update_ALL`](https://www.google.com/search?q=%23enemy_update--enemy_update_all)
          - [`Enemy_ChangeState`](https://www.google.com/search?q=%23enemy_changestate)
          - [`Enemy_GetCurrentState`](https://www.google.com/search?q=%23enemy_getcurrentstate)
          - [`Enemy_UpdateIdle`](https://www.google.com/search?q=%23enemy_updateidle)
          - [`Enemy_UpdateMove`](https://www.google.com/search?q=%23enemy_updatemove)
          - [`Enemy_UpdateAttack`](https://www.google.com/search?q=%23enemy_updateattack)
          - [`Enemy_UpdateTrapped`](https://www.google.com/search?q=%23enemy_updatetrapped)
          - [`Enemy_ToPlayer_Ground`](https://www.google.com/search?q=%23enemy_toplayer_ground)
          - [`Enemy_ToPlayer_Fly`](https://www.google.com/search?q=%23enemy_toplayer_fly)
          - [`Enemy_Throw`](https://www.google.com/search?q=%23enemy_throw)
          - [`Throw_Create`](https://www.google.com/search?q=%23throw_create)
          - [`Throw_Update` / `Throw_Update_ALL`](https://www.google.com/search?q=%23throw_update--throw_update_all)
          - [`Throw_MoveTowardPlayer`](https://www.google.com/search?q=%23throw_movetowardplayer)
      - [Bubble Module](https://www.google.com/search?q=%23bubble-module)
          - [Bubble State Lifecycle](https://www.google.com/search?q=%23bubble-state-lifecycle)
          - [Bubble Speed Constants](https://www.google.com/search?q=%23bubble-speed-constants)
          - [`bubble_init`](https://www.google.com/search?q=%23bubble_init)
          - [`bubble_add`](https://www.google.com/search?q=%23bubble_add)
          - [`bubble_update`](https://www.google.com/search?q=%23bubble_update)
          - [`bubble_update_frame`](https://www.google.com/search?q=%23bubble_update_frame)
      - [Score Module](https://www.google.com/search?q=%23score-module)
          - [Related Structures](https://www.google.com/search?q=%23related-structures)
          - [`Score_Add`](https://www.google.com/search?q=%23score_add)
          - [`Score_Get`](https://www.google.com/search?q=%23score_get)
          - [`Score_Print`](https://www.google.com/search?q=%23score_print)
      - [Util Module](https://www.google.com/search?q=%23util-module)
          - [`must_init`](https://www.google.com/search?q=%23must_init)
          - [`util_rand_i`](https://www.google.com/search?q=%23util_rand_i)
          - [`util_rand_f`](https://www.google.com/search?q=%23util_rand_f)

-----

## System Architecture & Execution Flow

### Overall Game State Flow

```
[Program Start]
      │
      ▼
  main()
  ├─ al_init()
  ├─ init_keyboard()
  └─ init_render()
      │
      ▼
  al_wait_for_event()  ◄──────────────────────────────┐
      │                                                │
      ▼                                                │
  GAME_MANAGER_UpdateState()                           │
      │                                                │
  ┌───┴─────────────────────────────────┐              │
  │       Game State Branching          │              │
  └───┬────────┬──────────┬─────────────┘              │
      │        │          │                            │
   MAIN     INGAME      NAME / SCORE / END             │
      │        │                                       │
      │        ▼                                       │
      │   routine_ingame()                             │
      │   ├─ keyboard_processing_ingame()              │
      │   ├─ GAME_MANAGER_CheckCollision()             │
      │   │     ├─ Collide_Object_Tile()  (All objects)
      │   │     ├─ Collide_Enemy_Player() (Enemy ↔ Player)
      │   │     └─ Collide_Object_Bubble()(Bubble ↔ Object)
      │   ├─ GAME_MANAGER_UpdatePhysics()              │
      │   │     ├─ stOBJECT_UpdatePhysics() (Player)   │
      │   │     ├─ stOBJECT_UpdatePhysics() (All Enemies)
      │   │     └─ bubble_update()                     │
      │   ├─ GAME_MANAGER_UpdateObject()               │
      │   │     ├─ player_update_frame()               │
      │   │     ├─ bubble_update_frame()               │
      │   │     ├─ Enemy_Update_ALL()                  │
      │   │     └─ Throw_Update_ALL()                  │
      │   ├─ render_draw_ingame()                      │
      │   └─ GAME_MANAGER_UpdateStage()                │
      │         ├─ All enemies defeated → NextStage()  │
      │         └─ Player dead → SetGameState(NAME)    │
      │                                                │
      └────────────────── Wait for next event ─────────┘
```

### Game State Transition Diagram

```
          SPACE Input
[MAIN] ──────────────► [INGAME]
  ▲                       │
  │     SPACE Input        │ All enemies defeated or Player dead
  │                       ▼
  │ SPACE Input          [NAME]  ── Name input complete ──► [SCORE]
  └──────────────────────────────────────────────────────┘
```

### Update Order Per Frame (INGAME)

```
┌──────────────────────────────────────────────────┐
│  Per-Frame (1/60 sec) Processing Sequence          │
│                                                  │
│  1. keyboard_processing_ingame()  ← Input Handle  │
│  2. CheckCollision()              ← Collision Det │
│  3. UpdatePhysics()               ← Physics Apply │
│  4. UpdateObject()                ← State Update  │
│  5. render_draw_ingame()          ← Render Output │
│  6. UpdateStage()                 ← Stage Logic   │
└──────────────────────────────────────────────────┘
```

-----

## Global Configuration Constants

> 📄 **File:** `bugglebuggle.h`  
> Defines system settings and enumerations shared across the entire project.

### System Settings

| Constant | Value | Description |
|---|---|---|
| `CONFIG_SYSTEM_FRAME` | `60` | Target FPS |
| `CONFIG_SYSTEM_LOADING_DELAY` | `60` (1 × FRAME) | Loading delay during state transitions (frames) |
| `CONFIG_SYSTEM_PLAYER_NAME_MAX` | `12` | Max length for player name |

### Game Settings

| Constant | Value | Description |
|---|---|---|
| `CONFIG_GAME_PLAYER_HEART_MAX` | `3` | Initial player lives |
| `CONFIG_MAP_X_MAX` | `36` | Horizontal tiles in map |
| `CONFIG_MAP_Y_MAX` | `24` | Vertical tiles in map |

### Physics Settings

| Constant | Value | Description |
|---|---|---|
| `CONFIG_PHYSICS_GRAVITY_FORCE` | `0.25` | Gravity acceleration (px/frame²) |
| `CONFIG_PHYSICS_JUMP_FORCE` | `4.2` | Initial jump velocity (px/frame) |
| `CONFIG_PHYSICS_PLAYER_INV_TIME` | `2` | Invincibility duration after hit (seconds) |

> 💡 **Balance Note:** Tuned to `GRAVITY = 0.25` and `JUMP_FORCE = 4.2`. If gravity is too high, movement feels heavy; if too low, it feels floaty. The current values create a natural parabolic trajectory of approx. 17 frames up and 17 frames down.

### Object Pool Settings

| Constant | Value | Description |
|---|---|---|
| `CONFIG_OBJECT_PLAYER_MAX` | `1` | Max number of players |
| `CONFIG_OBJECT_BUBBLE_MAX` | `20` | Max simultaneous bubbles |
| `CONFIG_OBJECT_ENEMY_MAX` | `10` | Max simultaneous enemies |
| `CONFIG_OBJECT_ENEMY_ATTACK_MAX` | `10` | Max simultaneous projectiles |
| `CONFIG_OBJECT_MAP_MAX` | `864` (36 × 24) | Max number of tiles |
| `CONFIG_COLLISION_TILE_SIZE` | `10` | Pixel size of one tile |

### Enumerations (Enums)

```c
typedef enum { eMAIN_STATE_WAIT = 0, eMAIN_STATE_START } eMAIN_STATE;

typedef enum {
    eGAME_STATE_MAIN = 0,
    eGAME_STATE_INGAME,
    eGAME_STATE_NAME,
    eGAME_STATE_SCORE,
    eGAME_STATE_END
} eGAME_STATE;

typedef enum {
    eGAME_STAGE_NONE = 0,
    eGAME_STAGE_1, eGAME_STAGE_2, eGAME_STAGE_3,
    eGAME_STAGE_MAX
} eGAME_STAGE;
```

-----

## Core Data Structures

> 📄 **File:** `object.h`  
> Base structure for all in-game objects.

```c
// Collision Box
typedef struct { double height; double width; } stCOLLISION_BOX;

// Collision Component
typedef struct {
    bool            is_static;   // true = Static (Tile), false = Dynamic
    eOBJ_TAG        tag;         // TILE / PLAYER / ENEMY / BUBBLE / ENEMY_ATTACK
    stCOLLISION_BOX box;
} stCOLLISION;

// Position / Velocity Structure
typedef struct { double x; double y; } stPOSITION;

// Physics Component
typedef struct {
    bool       is_gravity;  // Gravity application flag
    bool       is_jump;     // In-air flag
    eDIR_LOOK  look;        // Looking direction
    stPOSITION pos;         // Current position
    stPOSITION speed;       // Current velocity (px/frame)
} stPHYSICS;

// Rendering Component
typedef struct {
    int  is_active;  // Rendering active flag
    bool is_move;    // Is moving flag (animation trigger)
} stRENDER;

// Base Object (Inherited by all game objects)
typedef struct {
    bool        is_active;
    stCOLLISION coll;
    stPHYSICS   phy;
    stRENDER    rend;
} stOBJECT;
```

### Derived Structure Hierarchy

```
stOBJECT
├── stPLAYER  (obj + state, shot_timer, lives, invincible_timer, attack_timer)
├── stENEMY   (obj + type, state, state_timer, trapped_timer, throw_timer, is_angry)
├── stBUBBLE  (obj + frame, dur, state)
└── stTILE    (Wrapper for stOBJECT)
```

> ⚠️ **Important:** `stPLAYER`, `stENEMY`, and `stBUBBLE` all have `stOBJECT` as their first member. This allows tag-based polymorphism via `(stOBJECT*)` casting.

-----

## Main Loop & Game Manager

> 📄 **File:** `main.c` / `game_manager.h` / `game_manager.c`  
> Entry point and central hub for game state control. Owns all object resources (Player, Bubble, Enemy, Map) and serves as the entry point for collision, physics, and object updates.

-----

### `main`

```c
int main(void);
```

**Description** Entry point of the program. Initializes Allegro5 subsystems and executes the main loop based on a 60FPS timer.

**Initialization Order**

| Step | Function | Description |
|---|---|---|
| 1 | `al_init()` | Core Allegro5 init |
| 2 | `al_create_event_queue()` | Create event queue |
| 3 | `al_create_timer(1.0/60)` | Create 60FPS timer |
| 4 | `init_keyboard()` | Register keyboard subsystem |
| 5 | `init_render()` | Initialize renderer and display |

**Logic & Notes**

  - Calls `routine_game()` on every `ALLEGRO_EVENT_TIMER` event.
  - Exits loop on `ALLEGRO_EVENT_DISPLAY_CLOSE`.
  - `keyboard_update()` must be called **after** event queue processing to update key states accurately.

-----

### `GAME_MANAGER_UpdateState`

```c
eGAME_STATE GAME_MANAGER_UpdateState(void);
```

**Description** The core of the Game State Machine called every frame. Handles loading delays and, in `INGAME` state, checks stage transition flags to load the next stage.

**Return Value**

| Value | Description |
|---|---|
| `eGAME_STATE` | Current game state (used for branching) |

**Logic & Notes**

  - Calls `GAME_MANAGER_UpdateLoading()` (internal static) first to handle delay.
  - Automatically transitions to `eGAME_STATE_NAME` once all stages (`eGAME_STAGE_MAX`) are cleared.
  - Must be called as the **top priority** in the `main` event loop.

-----

### `GAME_MANAGER_SetGameState`

```c
void GAME_MANAGER_SetGameState(eGAME_STATE state);
```

**Description** Changes the game state and activates the loading flag (`is_loading = true`). Transitions should be handled through this function rather than direct member access.

**Parameters**

| Name | Type | Description |
|---|---|---|
| `state` | `eGAME_STATE` | The state to transition to |

-----

### `GAME_MANAGER_GetGameStage`

```c
eGAME_STAGE GAME_MANAGER_GetGameStage(void);
```

**Description** Returns the current active stage number.

**Return Value**

| Value | Description |
|---|---|
| `eGAME_STAGE_NONE` | Before In-game or Init state |
| `eGAME_STAGE_1` \~ `eGAME_STAGE_3` | Currently active stage |

-----

### `GAME_MANAGER_SetGameStage_Next`

```c
void GAME_MANAGER_SetGameStage_Next(void);
```

**Description** Schedules the loading of the next stage. Sets the internal `flag_next_stage` to `true`; actual transition happens during the next `UpdateState()` call.

> 💡 **Design Intent:** Transitioning stages immediately during collision/updates can cause issues during array iteration. The flag approach ensures a safe transition at frame boundaries.

-----

### `GAME_MANAGER_UpdateStage`

```c
void GAME_MANAGER_UpdateStage(void);
```

**Description** Updates stage progress information every frame. Counts remaining enemies and determines clear or game-over conditions.

**Judgment Logic**

| Condition | Result |
|---|---|
| `enemy_remain <= 0` | Call `SetGameStage_Next()` (Stage Clear) |
| `is_player_dead == true` | Call `SetGameState(NAME)` (Game Over) |

**Logic & Notes**

  - `enemy_el[type]` tracks **defeated** enemies (`max - current_remaining`).
  - `stage_frame` counts frames elapsed in the current stage. Used for display on the score screen.

-----

### `GAME_MANAGER_GetScore`

```c
int GAME_MANAGER_GetScore(void);
```

**Description** Calculates and returns the total score by summing kill records across all stages.

**Score Calculation Formula**

```
Total Score = Σ (Stage 0 to MAX) {
    + BASIC Kills  × 100 pts
    + THROW Kills  × 200 pts
    + (Only if in SCORE state) Remaining Lives × 500 pts
}
```

> ⚠️ **Caution:** The life bonus is only added when in the `eGAME_STATE_SCORE` state. Calling this in other states returns the score without the life bonus.

-----

### `GAME_MANAGER_IsLoading`

```c
bool GAME_MANAGER_IsLoading(void);
```

**Description** Returns whether a loading delay is currently active. Used as a guard to skip logic in `routine_ingame()`.

-----

### `GAME_MANAGER_GetPlayer`

```c
stPLAYER* GAME_MANAGER_GetPlayer(int player_id);
```

**Parameters**

| Name | Type | Description |
|---|---|---|
| `player_id` | `int` | Player index. Currently only `0` is valid. |

**Return Value:** Pointer to the corresponding `stPLAYER`.

-----

### `GAME_MANAGER_GetBubble`

```c
stBUBBLE* GAME_MANAGER_GetBubble(void);
```

**Return Value:** Pointer to the bubble object pool array (`stBUBBLE[CONFIG_OBJECT_BUBBLE_MAX]`).

-----

### `GAME_MANAGER_GetEnemy`

```c
stENEMY* GAME_MANAGER_GetEnemy(void);
```

**Return Value:** Pointer to the enemy object pool array (`stENEMY[CONFIG_OBJECT_ENEMY_MAX]`).

-----

### `GAME_MANAGER_GetEnemyAttacks`

```c
stOBJECT* GAME_MANAGER_GetEnemyAttacks(void);
```

**Return Value:** Pointer to the projectile object pool array (`stOBJECT[CONFIG_OBJECT_ENEMY_ATTACK_MAX]`).

-----

### `GAME_MANAGER_GetMap`

```c
stTILE* GAME_MANAGER_GetMap(void);
```

**Return Value:** Pointer to the map tile array (`stTILE[CONFIG_OBJECT_MAP_MAX]`).

-----

### `GAME_MANAGER_CheckCollision`

```c
void GAME_MANAGER_CheckCollision(void);
```

**Description** Checks all collision pairs in order and handles collision responses every frame.

**Processing Order & Complexity**

```
Order │ Target                       │ Complexity
──────┼──────────────────────────────┼─────────────
 1    │ All Tiles × All Players      │ O(T × P)
 2    │ All Tiles × All Enemies      │ O(T × E)
 3    │ All Tiles × All Bubbles      │ O(T × B)
 4    │ All Enemies × Player[0]      │ O(E)
 5    │ All Projectiles × Player[0]  │ O(A)
 6    │ All Bubbles × Player[0]      │ O(B)
 7    │ All Enemies × All Bubbles    │ O(E × B)
```

> ⚠️ **Performance Note:** Item 7 is a double loop (Enemy × Bubble) at O(E×B) = O(100). This is fine for current pool sizes, but spatial partitioning would be required if object counts significantly increase.

-----

### `GAME_MANAGER_UpdatePhysics`

```c
void GAME_MANAGER_UpdatePhysics(void);
```

**Description** Applies physics updates to the player and all active enemies, and updates bubble status.

> ⚠️ **Call Order:** Must be called **after** `CheckCollision()`. Applying physics without resolving collisions may cause objects to pass through tiles.

-----

### `GAME_MANAGER_UpdateObject`

```c
void GAME_MANAGER_UpdateObject(void);
```

**Description** Updates player frame state, bubble positions, enemy AI, and projectiles. The final logic step of the game loop.

**Internal Call Order**

| Order | Call | Description |
|---|---|---|
| 1 | `player_update_frame()` | Update player state/timers |
| 2 | `bubble_update_frame()` | Update bubble pos/frame counters |
| 3 | `Enemy_Update_ALL()` | Update all enemy AI |
| 4 | `Throw_Update_ALL()` | Update all projectiles |

-----

## Keyboard Module

> 📄 **File:** `keyboard.h` / `keyboard.c`  
> Receives Allegro5 key events, manages them as bit flags, and handles input for each game state.

### Key State Flags

| Flag | Value | Meaning |
|---|---|---|
| `KEY_SEEN` | `1` | Event occurred this frame |
| `KEY_DOWN` | `2` | Currently held down |

> 💡 **Bitmask Design:** If `key[code]` is `KEY_SEEN | KEY_DOWN (= 3)`, it was pressed for the first time this frame. If it's just `KEY_DOWN (= 2)`, it was already held from a previous frame. `KEY_SEEN` is cleared every timer event.

-----

### `init_keyboard`

```c
void init_keyboard(ALLEGRO_EVENT_QUEUE* queue);
```

**Description** Initializes the Allegro keyboard subsystem and registers it with the event queue.

-----

### `keyboard_update`

```c
void keyboard_update(ALLEGRO_EVENT* event);
```

**Description** Analyzes events to update the `key[]` array's bit states. In Name Input mode (`is_input`), it converts key presses to characters and stores them in `player_name.data`.

**Event Processing**

| Event Type | Action |
|---|---|
| `ALLEGRO_EVENT_TIMER` | Clear `KEY_SEEN` bit for all keys (frame boundary) |
| `ALLEGRO_EVENT_KEY_DOWN` | Set `KEY_SEEN | KEY_DOWN` for the key; save char if in input mode |
| `ALLEGRO_EVENT_KEY_UP` | Clear `KEY_DOWN` bit for the key |

**Logic & Notes**

  - Name input uses `keycode + 'A' - 1` conversion because Allegro keycodes (`ALLEGRO_KEY_A = 1`) start from 1.

-----

### `keyboard_processing_main`

```c
eMAIN_STATE keyboard_processing_main(void);
```

**Description** Processes input on the main screen. Returns whether Space was pressed.

-----

### `keyboard_processing_ingame`

```c
void keyboard_processing_ingame(void);
```

**Description** Handles arrow keys and Space (shoot bubble) during in-game play, calling `player_update_input()`.

**Logic & Notes**

  - The Down key (`KEY_DOWN`) is only processed if the `KEY_SEEN` flag is present to prevent continuous falling.
  - Other keys provide input every frame as long as `key[code]` is non-zero.

-----

### `keyboard_processing_name`

```c
bool keyboard_processing_name(void);
```

**Description** Receives key input on the name entry screen. Terminates input on Space.

**Return Value:** `true` = Input complete, `false` = Still inputting.

-----

### `keyboard_processing_score`

```c
bool keyboard_processing_score(void);
```

**Description** Returns whether Space was pressed on the score screen.

-----

### `keyboard_get_name`

```c
const char* keyboard_get_name(void);
```

**Description** Returns a pointer to the entered player name string.

-----

## Physics & Collision

> 📄 **File:** `physics.h` / `physics.c` / `collision.h` / `collision.c`  
> Physics engine for gravity/velocity and AABB-based collision detection/response.

-----

### `stOBJECT_UpdatePhysics`

```c
void stOBJECT_UpdatePhysics(stOBJECT* obj);
```

**Description** Applies laws of physics to an object every frame: adds velocity to position, accumulates gravity into vertical speed, and resets horizontal speed at frame end.

**Physics Formulas**

```
// Position Update
pos.x += speed.x
pos.y += speed.y

// Gravity Accumulation (Active objects only)
if (is_gravity && is_active):
    speed.y += GRAVITY  // += 0.25 (acceleration per frame)

// Rendering Movement Flag
rend.is_move = (speed.x != 0)

// Horizontal Speed Consumption (Stops if no input)
speed.x = 0
```

**Design Values**

| Value | Amount | Reason |
|---|---|---|
| `GRAVITY` | `0.25` px/frame² | Provides platformer-like weight without being too fast at 60FPS. |
| `JUMP_FORCE` | `4.2` px/frame | Approx. 17 frames to peak, total jump height approx. 35px (3.5 tiles). |

-----

### `Collide_Object_Tile`

```c
void Collide_Object_Tile(stOBJECT* object, stTILE* tile);
```

**Description** Determines and resolves overlap between dynamic objects (Player/Enemy/Bubble) and static tiles based on predicted position (`next_pos`). Y-axis and X-axis collisions are handled independently.

**AABB Sweep Algorithm**

```
Predicted Pos: next_x = pos.x + speed.x
               next_y = pos.y + speed.y

[Y-axis Processing] - Only if X overlaps
  ▲ Moving Up & next_y < MAP_Y_MAX(10)
    → speed.y = 0, pos.y = 10  (Ceiling lock)

  ▼ Moving Down
    · next_y > MAP_Y_MIN(220)
      → speed.y = 0, pos.y = 220  (Floor lock)
    · curr_bottom ≤ tile_top AND next_bottom ≥ tile_top
      → pos.y = tile_top - obj_height  (Landing on tile)
      → speed.y = 0, is_jump = false

[X-axis Processing] - Only if Y overlaps
  ► Moving Right & will pass tile left edge
    → pos.x = tile_left - obj_width
    → speed.x = 0
    → (If Bubble) state = FLOAT, speed.y = -0.8

  ◄ Moving Left & will pass tile right edge
    → pos.x = tile_right
    → speed.x = 0
    → (If Bubble) state = FLOAT, speed.y = -0.8
```

-----

### `Collide_Enemy_Player`

```c
void Collide_Enemy_Player(stOBJECT* object, stPLAYER* player);
```

**Description** Handles AABB collision between enemies (or projectiles) and the player. Branches to "kill enemy" or "damage player" based on enemy state.

**Collision Decision Table**

```
Player state == DEAD OR invincible_timer > 0?
  → Ignore collision (return)

object.tag == eOBJ_TAG_ENEMY:
  If AABB collision:
    enemy.state == TRAPPED?
      → Kill enemy immediately (state=DEAD, is_active=false)
    Else:
      → player.lives--
      player.lives <= 0?
        → Player death (state=DEAD, is_active=false)
      Else:
        → invincible_timer = 2s × 60 frames

object.tag == eOBJ_TAG_ENEMY_ATTACK:
  If AABB collision:
    → player.lives-- (Same logic)
    → object.is_active = false  (Destroy projectile)
```

-----

### `Collide_Object_Bubble`

```c
void Collide_Object_Bubble(stOBJECT* object, stBUBBLE* bubble);
```

**Description** Handles collision between objects and bubbles. Branches into "landing assist" for the player or "capturing" for enemies.

**Tag-specific Processing**

| Object Tag | Bubble State | Result |
|---|---|---|
| `eOBJ_TAG_PLAYER` | `FLOAT` | If player is falling, `is_jump = false` (Allows landing on bubble). |
| `eOBJ_TAG_ENEMY` | `SHOOTING` | Enemy switches to `TRAPPED`, bubble deactivates. |
| `eOBJ_TAG_ENEMY` | `FLOAT` / `POP` | Ignore (no longer in shooting phase). |

-----

## Map Module

> 📄 **File:** `map.h` / `map.c` / `map_1.c` / `map_2.c` / `map_3.c`  
> Responsible for tile initialization, stage data loading, and layout/enemy placement for each stage.

### Map Data Structures

```c
// Single Tile (Wrapper for stOBJECT)
typedef struct { stOBJECT obj; } stTILE;

// Enemy placement data within a stage
typedef struct {
    bool        is_active;
    eENEMY_TYPE type;
    stPOSITION  pos;
} stSTAGE_ENEMY_DATA;

// Full Stage Data (Layout + Enemy placement)
typedef struct {
    int (*stage)[CONFIG_MAP_X_MAX];  // Pointer to 24x36 int array
    stSTAGE_ENEMY_DATA* enemies;
} stSTAGE_DATA;
```

-----

### `stTILE_init`

```c
stTILE* stTILE_init(stTILE* tile, stPOSITION* pos);
```

**Description** Initializes a single tile at the specified position. Tiles are always static (`is_static = true`).

**Default Init Values**

| Field | Value |
|---|---|
| `is_active` | `true` |
| `coll.is_static` | `true` |
| `coll.tag` | `eOBJ_TAG_TILE` |
| `coll.box` | `10 × 10` px |

-----

### `map_init_stage`

```c
void map_init_stage(stTILE* map, stENEMY* enemy, stSTAGE_DATA* data);
```

**Description** Batch initializes the map tile array and enemy pool based on stage data. Called on every stage transition.

**Init Sequence**

1.  `init_player(player[0])`: Reset player position/state.
2.  `memset(enemy, 0, ...)`: Clear the entire enemy pool.
3.  `Enemy_Create(...)`: Create enemies based on `data->enemies`.
4.  Iterate Tile Array: `data->stage[i][j] != 0` → `stTILE_init()`, else `is_active = false`.

-----

### `MAP_1_GetData` / `MAP_2_GetData` / `MAP_3_GetData`

**Stage 1:**

  - **Layout:** Left/right walls, top/bottom boundaries, 4 horizontal platforms with central gaps.
  - **Enemies:** 6 `BASIC` types (ground-tracking).

**Stage 2:**

  - **Layout:** Irregular platforms (staircase style) including a central protruding platform.
  - **Enemies:** 3 `THROW` types (aerial projectiles).

**Stage 3:**

  - **Layout:** Asymmetric structures with a high central isolated platform.
  - **Enemies:** Mix of 3 `THROW` + 3 `BASIC` types.

-----

## Player Module

> 📄 **File:** `player.h` / `player.c`  
> Handles player initialization, input processing, and per-frame state updates.

### `stPLAYER` Structure

```c
typedef struct {
    stOBJECT      obj;             // Base object
    ePLAYER_STATE state;           // Current state (IDLE/MOVE/ATTACK/DEAD)
    int           shot_timer;      // Bubble fire cooldown
    int           lives;           // Remaining lives
    int           invincible_timer;// Invincibility frame counter
    int           attack_timer;    // Animation duration counter
} stPLAYER;
```

-----

### `init_player`

**Initialization Values:**

  - **Start Pos:** `15.0 / 210.0`
  - **Lives:** `3`
  - **Gravity:** `true`
  - **Box Size:** `10 x 10` px

-----

### `player_update_input`

**Key Mapping:**

  - `KEY_LEFT` / `KEY_RIGHT`: `speed.x = ±2.0`, state = `MOVE`.
  - `KEY_UP`: `speed.y = -4.2` (only if `is_jump == false`).
  - `KEY_DOWN`: `pos.y += 3` (manual fall through platforms).
  - `KEY_SPACE`: Triggers `bubble_add()` if `shot_timer <= 0`. Sets `shot_timer = 20`, `attack_timer = 10`.

-----

## Enemy Module

> 📄 **File:** `enemy.h` / `enemy.c`  
> Manages enemy creation, state machine-based AI, and projectiles.

### Characteristics by Enemy Type

| Type | Movement | Attack | Base Speed | Angry Speed |
|---|---|---|---|---|
| `BASIC` | Ground tracking + Jump | Contact damage | 1.2 px/f | 2.4 px/f |
| `THROW` | Aerial float (No gravity) | Fire projectiles | 0.8 px/f | 1.6 px/f |
| `BOSS` | Aerial float | Contact | 0.8 px/f | 1.2 px/f |

-----

### `Enemy_Update` (State Machine)

  - **[IDLE]:** Immediately transitions to `MOVE`.
  - **[MOVE]:** Calls `ToPlayer_Ground` (BASIC) or `ToPlayer_Fly` (THROW/BOSS).
  - **[ATTACK]:** Managed via timers in `THROW` type.
  - **[TRAPPED]:** Countdown; returns to `MOVE` with `is_angry = true` when finished.

-----

### `Enemy_ToPlayer_Ground` (BASIC AI)

  - **Wall Detection:** Reverses direction if `rend.is_move` is false for \>1 frame.
  - **Jumping:** Jumps if player is \>10px above, `is_jump` is false, and a \~55% probability check (every 60 frames) passes.

-----

### `Throw_MoveTowardPlayer` (Vector Normalization)

Calculates unit vector towards player and multiplies by `THROW_SPEED (2.5)`.

```
dx = target.pos.x - throw.pos.x
dy = target.pos.y - throw.pos.y
dist = sqrt(dx² + dy²)
speed.x = (dx / dist) × 2.5
speed.y = (dy / dist) × 2.5
```

-----

## Bubble Module

> 📄 **File:** `bubble.h` / `bubble.c`  
> Handles the core mechanic: bubble firing, state transitions, and movement.

### Bubble State Lifecycle

1.  **[SHOOTING]:** Initial horizontal firing phase (30 frames).
2.  **[FLOAT]:** `speed.x = 0`, `speed.y = -0.8` (upward movement).
3.  **[POP]:** Triggered after 300 frames.
4.  **Inactive:** Object is disabled after 330 frames.

-----

## Score Module

> 📄 **File:** `score.h` / `score.c`  
> Leaderboard storage/retrieval using SQLite3 and score screen rendering.

### `Score_Add`

Stores player name and score in `leaderboard.db`. Uses **Prepared Statements** to prevent SQL Injection.

### `Score_Get`

Retrieves top 10 scores:

```sql
SELECT name, score FROM Ranking ORDER BY score DESC, name ASC LIMIT 10;
```

-----

## Util Module

> 📄 **File:** `util.h` / `util.c`  
> Initialization helpers and random number generation.

  - **`must_init`:** Checks a boolean condition; if false, prints error and calls `exit(1)`.
  - **`util_rand_i / f`:** Wrappers for standard `rand()` for ranges.
  - **`Get_RandNum_1_to_9` (Enemy AI):** Uses a separate **XorShift** algorithm for seed-independent pseudo-randomness.

-----

*This document was generated based on the source code analysis of the `bugglebuggle` project.* *Last Modified: April 2026*
