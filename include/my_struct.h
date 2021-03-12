/*
** EPITECH PROJECT, 2020
** my_struct
** File description:
** header
*/

#ifndef MY_STRUCT
#define MY_STRUCT

#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/Graphics/Sprite.h>
#include <SFML/Audio/Music.h>
#include <SFML/Graphics/Text.h>
#include <SFML/Graphics/Font.h>
#include <SFML/System/Clock.h>
#include <SFML/Window/Mouse.h>

#define MENU (0)
#define GAME (1)
#define PAUSE (2)
#define SELECT (3)
#define END (5)
#define NBR_KUNAI (10)
#define NARUTO ("assets/naruto.png")
#define SASUKE ("assets/sasuke.png")
#define NEJI ("assets/neji.png")
#define SAKURA ("assets/sakura.png")
#define KYUBI ("assets/naruto_kyubi.png")

typedef struct {
    int dead;
    int score;
    int new_obs;
    int jump;
    int status_music;
    int current_player;
    sfSprite *back_1[2];
    sfSprite *back_2[2];
    sfSprite *back_3[2];
    sfSprite *ground[2];
    sfSprite *player[5];
    sfSprite *kunai[NBR_KUNAI];
    sfIntRect r_player[5];
    sfIntRect r_jump[5];
    sfText *t_score[2];
    sfText *t_time[2];
}game_t;

typedef struct menu {
    int music_status;
    sfSprite *s_logo;
    sfSprite *s_play;
    sfSprite *s_quit;
    sfSprite *back_menu;
    sfSprite *back_ground;
    sfText *t_play;
    sfText *t_quit;
    sfIntRect r_play;
    sfIntRect r_quit;
}menu_t;

typedef struct pause {
    sfText *pause;
    sfSprite *s_pause;
    sfSprite *s_resume;
    sfSprite *s_quit;
    sfSprite *s_menu;
    sfText *t_resume;
    sfText *t_quit;
    sfText *t_menu;
}pause_t;

typedef struct {
    int current_player;
    sfSprite *arrow_next;
    sfSprite *arrow_previous;
    sfSprite *player[5];
    sfIntRect r_player[5];
    sfSprite *s_return;
    sfSprite *s_confirm;
    sfText *t_return;
    sfText *t_confirm;
}select_t;

typedef struct {
    sfText *t_end;
    sfSprite *s_logo;
    sfSprite *s_play;
    sfSprite *s_quit;
    sfText *t_play;
    sfText *t_quit;
    sfIntRect r_play;
    sfIntRect r_quit;
}end_t;

typedef struct {
    int i;
    float seconds;
    float game_seconds;
    char **map;
    sfTime time_game;
    sfClock *clock_game;
    sfMusic *m_menu;
    sfMusic *m_game;
    sfTime time;
    sfClock *clock;
    sfRenderWindow *window;
    game_t *game;
    menu_t *menu;
    pause_t *pause;
    select_t *select;
    end_t *end;
    sfEvent event;
}all_t;

void load_menu(menu_t *menu);
int sort_button_menu(sfMouseButtonEvent mouse, menu_t *menu, all_t *all);
void display_menu(all_t *all);
void display_game(all_t *all);
void load_compoment(all_t *all);
void para_part_one(game_t *game);
void para_part_two(game_t *game);
void para_part_three(game_t *game);
void para_ground(game_t *game);
int sort_button_game(sfMouseButtonEvent mouse, all_t *all);
int sort_button_p(sfMouseButtonEvent mouse, pause_t *pause, all_t *all);
void sort_button_pn(sfMouseButtonEvent mouse, pause_t *pause, all_t *all);
void load_pause(pause_t *pause);
void display_pause(all_t *all);
void anim_para(all_t *all);
void load_player_select(all_t *all);
void display_select(all_t *all);
void load_select(all_t *all);
int sort_button_select(sfMouseButtonEvent mouse, select_t *select);
void sort_arrow(sfMouseButtonEvent mouse, select_t *select);
void state_sakura(select_t *select, all_t *all);
void state_naruto(select_t *select, all_t *all);
void state_kyubi(select_t *select, all_t *all);
void state_neji(select_t *select, all_t *all);
void state_sasuke(select_t *select, all_t *all);
void run_sasuke(game_t *game, all_t *all);
void run_naruto(game_t *game, all_t *all);
void run_kyubi(game_t *game, all_t *all);
void run_sakura(game_t *game, all_t *all);
void run_neji(game_t *game, all_t *all);
void sort_player_game(all_t *all);
void load_player_game(all_t *all);
void create_sound_menu(all_t *all);
void verif_music_menu(all_t *all);
void verif_music_game(all_t *all);
void destroy_music(all_t *all);
void jump_naruto(game_t *game, all_t *all);
void jump_sakura(game_t *game, all_t *all);
void jump_sasuke(game_t *game, all_t *all);
void jump_neji(game_t *game, all_t *all);
void jump_kyubi(game_t *game, all_t *all);
void sort_player_jump(all_t *all);
void jump(int player, game_t *game, all_t *all);
int open_read_and_verify(char *filename, all_t *all);
int error_handing(int ac, char **av, all_t *all);
void load_kunai(game_t *game);
void lauch_kunai(game_t *game, all_t *all);
void sort_player_start_jump(all_t *all);
void sort_player_end_jump(all_t *all);
void sort_player_select(all_t *all);
void jump_kyubi_move(game_t *game, all_t *all);
void sort_player_start_jump(all_t *all);
void sort_player_end_jump(all_t *all);
void sort_player_midle_jump(all_t *all);
void verif_player_touch_obs(all_t *all);
void game_loop(all_t *all);
void auto_lauch_kunai(all_t *all);
void update_time_and_score(all_t *all);
void print_all_game(all_t *all);
void display_end(all_t *all);
void load_end(end_t *end);
int sort_button_end(sfMouseButtonEvent mouse, all_t *all);
void load_window(all_t *all);

#endif /* !MY_STRUCT */