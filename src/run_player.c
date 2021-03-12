/*
** EPITECH PROJECT, 2021
** run_player
** File description:
** animate run of player
*/

#include "my.h"
#include "my_struct.h"

void run_sakura(game_t *game, all_t *all)
{
    sfTexture *t_player;

    if (all->seconds > 0.03) {
        if (game->r_player[2].left >= 580) {
            game->r_player[2].left = 330;
        } else
            game->r_player[2].left += 50;
        t_player = sfTexture_createFromFile("assets/sakura.png", \
                                            &game->r_player[2]);
        sfSprite_setTexture(game->player[2], t_player, sfFalse);
        free(t_player);
        sfClock_restart(all->clock);
    }
    sfRenderWindow_drawSprite(all->window, game->player[2], NULL);
}

void run_naruto(game_t *game, all_t *all)
{
    sfTexture *t_player;

    if (all->seconds > 0.01) {
        if (game->r_player[0].left >= 544) {
            game->r_player[0].left = 279;
        } else
            game->r_player[0].left += 53;
        t_player = sfTexture_createFromFile("assets/naruto.png", \
                                            &game->r_player[0]);
        sfSprite_setTexture(game->player[0], t_player, sfFalse);
        free(t_player);
        sfClock_restart(all->clock);
    }
    sfRenderWindow_drawSprite(all->window, game->player[0], NULL);
}

void run_kyubi(game_t *game, all_t *all)
{
    sfTexture *t_player;

    if (all->seconds > 0.1) {
        if (game->r_player[4].left >= 210) {
            game->r_player[4].left = 11;
        } else
            game->r_player[4].left += 44;
        t_player = sfTexture_createFromFile("assets/naruto_kyubi.png", \
                                            &game->r_player[4]);
        sfSprite_setTexture(game->player[4], t_player, sfFalse);
        free(t_player);
        sfClock_restart(all->clock);
    }
    sfRenderWindow_drawSprite(all->window, game->player[4], NULL);
}

void run_neji(game_t *game, all_t *all)
{
    sfTexture *t_player;

    if (all->seconds > 0.03) {
        if (game->r_player[3].left >= 473) {
            game->r_player[3].left = 278;
        } else
            game->r_player[3].left += 39;
        t_player = sfTexture_createFromFile("assets/neji.png", \
                                            &game->r_player[3]);
        sfSprite_setTexture(game->player[3], t_player, sfFalse);
        free(t_player);
        sfClock_restart(all->clock);
    }
    sfRenderWindow_drawSprite(all->window, game->player[3], NULL);
}

void run_sasuke(game_t *game, all_t *all)
{
    sfTexture *t_player;

    if (all->seconds > 0.03) {
        if (game->r_player[1].left >= 540) {
            game->r_player[1].left = 319;
        } else
            game->r_player[1].left += 47;
        t_player = sfTexture_createFromFile("assets/sasuke.png", \
                                            &game->r_player[1]);
        sfSprite_setTexture(game->player[1], t_player, sfFalse);
        free(t_player);
        sfClock_restart(all->clock);
    }
    sfRenderWindow_drawSprite(all->window, game->player[1], NULL);
}