/*
** EPITECH PROJECT, 2020
** load_window
** File description:
** load window and compoment
*/

#include "my.h"
#include "my_struct.h"

void load_window(all_t *all)
{
    sfVideoMode mode = {1920, 1080, 32};

    all->window = sfRenderWindow_create(mode, "Naruto Runner",
                                    sfDefaultStyle, NULL);
    sfRenderWindow_setVerticalSyncEnabled(all->window, sfTrue);
    sfRenderWindow_setFramerateLimit(all->window, 30);
}

void load_score_text(game_t *game)
{
    sfFont *font;

    font = sfFont_createFromFile("assets/Games.ttf"),
    game->t_score[0] = sfText_create();
    game->t_score[1] = sfText_create();
    sfText_setString(game->t_score[0], "SCORE :");
    sfText_setFont(game->t_score[0], font);
    sfText_setFont(game->t_score[1], font);
    sfText_setStyle(game->t_score[1], sfTextBold);
    sfText_setStyle(game->t_score[0], sfTextBold);
    sfText_setColor(game->t_score[0], sfRed);
    sfText_setColor(game->t_score[1], sfRed);
    sfText_setPosition(game->t_score[0], (sfVector2f) {1680, 0});
    sfText_setPosition(game->t_score[1], (sfVector2f) {1800, 0});
}

void load_time_text(game_t *game)
{
    sfFont *font;

    font = sfFont_createFromFile("assets/Games.ttf"),
    game->t_time[0] = sfText_create();
    game->t_time[1] = sfText_create();
    sfText_setString(game->t_time[0], "TIME :");
    sfText_setFont(game->t_time[0], font);
    sfText_setFont(game->t_time[1], font);
    sfText_setStyle(game->t_time[1], sfTextBold);
    sfText_setStyle(game->t_time[0], sfTextBold);
    sfText_setColor(game->t_time[0], sfRed);
    sfText_setColor(game->t_time[1], sfRed);
    sfText_setPosition(game->t_time[0], (sfVector2f) {900, 0});
    sfText_setPosition(game->t_time[1], (sfVector2f) {1000, 0});
}

void load_compoment_2(all_t *all)
{
    para_part_one(all->game);
    para_part_two(all->game);
    para_part_three(all->game);
    para_ground(all->game);
    load_pause(all->pause);
    load_player_select(all);
    load_select(all);
    load_player_game(all);
    create_sound_menu(all);
    load_time_text(all->game);
    load_score_text(all->game);
    load_end(all->end);
}

void load_compoment(all_t *all)
{
    all->i = MENU;
    all->select->current_player = 0;
    all->clock = sfClock_create();
    all->clock_game = sfClock_create();
    all->menu->music_status = 1;
    all->game->status_music = 0;
    all->game->jump = 0;
    all->game->new_obs = 0;
    all->game->score = 0;
    all->game->dead = 0;
    load_window(all);;
    load_kunai(all->game);
    load_menu(all->menu);
    load_compoment_2(all);
}