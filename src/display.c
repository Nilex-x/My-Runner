/*
** EPITECH PROJECT, 2020
** display
** File description:
** display contain of game
*/

#include "my.h"
#include "my_struct.h"

void display_menu(all_t *all)
{
    sfClock_restart(all->clock_game);
    sfSprite_setPosition(all->menu->s_logo, (sfVector2f) {960, 220});
    sfRenderWindow_drawSprite(all->window, all->menu->back_menu, NULL);
    sfRenderWindow_drawSprite(all->window, all->menu->back_ground, NULL);
    sfRenderWindow_drawSprite(all->window, all->menu->s_play, NULL);
    sfRenderWindow_drawText(all->window, all->menu->t_play, NULL);
    sfRenderWindow_drawSprite(all->window, all->menu->s_quit, NULL);
    sfRenderWindow_drawText(all->window, all->menu->t_quit, NULL);
    sfRenderWindow_drawSprite(all->window, all->menu->s_logo, NULL);
}

void display_pause(all_t *all)
{
    sfRenderWindow_setMouseCursorVisible(all->window, sfTrue);
    sfSprite_setPosition(all->menu->s_logo, (sfVector2f) {960, 320});
    sfRenderWindow_drawSprite(all->window, all->game->back_1[0], NULL);
    sfRenderWindow_drawSprite(all->window, all->game->back_1[1], NULL);
    sfRenderWindow_drawSprite(all->window, all->game->back_2[0], NULL);
    sfRenderWindow_drawSprite(all->window, all->game->back_2[1], NULL);
    sfRenderWindow_drawSprite(all->window, all->game->back_3[0], NULL);
    sfRenderWindow_drawSprite(all->window, all->game->back_3[1], NULL);
    sfRenderWindow_drawSprite(all->window, all->game->ground[0], NULL);
    sfRenderWindow_drawSprite(all->window, all->game->ground[1], NULL);
    sfRenderWindow_drawSprite(all->window, all->pause->s_pause, NULL);
    sfRenderWindow_drawSprite(all->window, all->pause->s_resume, NULL);
    sfRenderWindow_drawText(all->window, all->pause->t_resume, NULL);
    sfRenderWindow_drawSprite(all->window, all->pause->s_quit, NULL);
    sfRenderWindow_drawText(all->window, all->pause->t_quit, NULL);
    sfRenderWindow_drawSprite(all->window, all->menu->s_logo, NULL);
    sfRenderWindow_drawSprite(all->window, all->pause->s_menu, NULL);
    sfRenderWindow_drawText(all->window, all->pause->t_menu, NULL);
}

void display_select(all_t *all)
{
    sfRenderWindow_drawSprite(all->window, all->menu->back_menu, NULL);
    sfRenderWindow_drawSprite(all->window, all->menu->back_ground, NULL);
    sfRenderWindow_drawSprite(all->window, all->select->arrow_next, NULL);
    sfRenderWindow_drawSprite(all->window, all->select->arrow_previous, NULL);
    sort_player_select(all);
    sfRenderWindow_drawSprite(all->window, all->select->s_return, NULL);
    sfRenderWindow_drawText(all->window, all->select->t_return, NULL);
    sfRenderWindow_drawSprite(all->window, all->select->s_confirm, NULL);
    sfRenderWindow_drawText(all->window, all->select->t_confirm, NULL);
}

void display_end(all_t *all)
{
    sfRenderWindow_setMouseCursorVisible(all->window, sfTrue);
    sfRenderWindow_drawSprite(all->window, all->game->back_1[0], NULL);
    sfRenderWindow_drawSprite(all->window, all->game->back_1[1], NULL);
    sfRenderWindow_drawSprite(all->window, all->game->back_2[0], NULL);
    sfRenderWindow_drawSprite(all->window, all->game->back_2[1], NULL);
    sfRenderWindow_drawSprite(all->window, all->game->back_3[0], NULL);
    sfRenderWindow_drawSprite(all->window, all->game->back_3[1], NULL);
    sfRenderWindow_drawSprite(all->window, all->game->ground[0], NULL);
    sfRenderWindow_drawSprite(all->window, all->game->ground[1], NULL);
    sfRenderWindow_drawSprite(all->window, all->end->s_play, NULL);
    sfRenderWindow_drawText(all->window, all->end->t_play, NULL);
    sfRenderWindow_drawSprite(all->window, all->end->s_quit, NULL);
    sfRenderWindow_drawText(all->window, all->end->t_quit, NULL);
    sfRenderWindow_drawSprite(all->window, all->end->s_logo, NULL);
    sfRenderWindow_drawText(all->window, all->end->t_end, NULL);
    print_all_game(all);
}

void display_game(all_t *all)
{
    int current_time = (int) all->game_seconds;
    all->game->current_player = all->select->current_player;
    sfRenderWindow_setMouseCursorVisible(all->window, sfFalse);
    anim_para(all);
    if (all->game->jump == 0)
        sort_player_game(all);
    if (all->game->jump != 0)
        sort_player_jump(all);
    lauch_kunai(all->game, all);
    update_time_and_score(all);
    verif_player_touch_obs(all);
    if (current_time != (int) all->game_seconds)
        auto_lauch_kunai(all);
}