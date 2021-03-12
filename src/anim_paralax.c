/*
** EPITECH PROJECT, 2021
** anim_paralax
** File description:
** animate paralax
*/

#include "my.h"
#include "my_struct.h"

void anim_part_one(game_t *game, all_t *all)
{
    sfVector2f pos_1 = sfSprite_getPosition(game->back_1[0]);
    sfVector2f pos_2 = sfSprite_getPosition(game->back_1[1]);

    if (all->seconds > 0.01) {
        if (pos_2.x == 0 && pos_1.x == -1920) {
            sfSprite_setPosition(game->back_1[0], (sfVector2f) {0, 0});
            sfSprite_setPosition(game->back_1[1], (sfVector2f) {1920, 0});
        } else {
            pos_1.x -= 10;
            pos_2.x -= 10;
            sfSprite_setPosition(game->back_1[0], pos_1);
            sfSprite_setPosition(game->back_1[1], pos_2);
        }
    }
    sfRenderWindow_drawSprite(all->window, game->back_1[0], NULL);
    sfRenderWindow_drawSprite(all->window, game->back_1[1], NULL);
}

void anim_part_two(game_t *game, all_t *all)
{
    sfVector2f pos_1 = sfSprite_getPosition(game->back_2[0]);
    sfVector2f pos_2 = sfSprite_getPosition(game->back_2[1]);

    if (all->seconds > 0.01) {
        if (pos_2.x == 0 && pos_1.x == -1920) {
            sfSprite_setPosition(game->back_2[0], (sfVector2f) {0, 0});
            sfSprite_setPosition(game->back_2[1], (sfVector2f) {1920, 0});
        } else {
            pos_1.x -= 5;
            pos_2.x -= 5;
            sfSprite_setPosition(game->back_2[0], pos_1);
            sfSprite_setPosition(game->back_2[1], pos_2);
        }
    }
    sfRenderWindow_drawSprite(all->window, game->back_2[0], NULL);
    sfRenderWindow_drawSprite(all->window, game->back_2[1], NULL);
}

void anim_part_three(game_t *game, all_t *all)
{
    sfVector2f pos_1 = sfSprite_getPosition(game->back_3[0]);
    sfVector2f pos_2 = sfSprite_getPosition(game->back_3[1]);

    if (all->seconds > 0.01) {
        if (pos_2.x == 0 && pos_1.x == -1920) {
            sfSprite_setPosition(game->back_3[0], (sfVector2f) {0, 0});
            sfSprite_setPosition(game->back_3[1], (sfVector2f) {1920, 0});
        } else {
            pos_1.x -= 2;
            pos_2.x -= 2;
            sfSprite_setPosition(game->back_3[0], pos_1);
            sfSprite_setPosition(game->back_3[1], pos_2);
        }
    }
    sfRenderWindow_drawSprite(all->window, game->back_3[0], NULL);
    sfRenderWindow_drawSprite(all->window, game->back_3[1], NULL);
}

void anim_ground(game_t *game, all_t *all)
{
    sfVector2f pos_1 = sfSprite_getPosition(game->ground[0]);
    sfVector2f pos_2 = sfSprite_getPosition(game->ground[1]);

    if (all->seconds > 0.01) {
        if (pos_2.x == 0 && pos_1.x == -1920) {
            sfSprite_setPosition(game->ground[0], (sfVector2f) {0, 880});
            sfSprite_setPosition(game->ground[1], (sfVector2f) {1920, 880});
        } else {
            pos_1.x -= 10;
            pos_2.x -= 10;
            sfSprite_setPosition(game->ground[0], pos_1);
            sfSprite_setPosition(game->ground[1], pos_2);
        }
    }
    sfRenderWindow_drawSprite(all->window, game->ground[0], NULL);
    sfRenderWindow_drawSprite(all->window, game->ground[1], NULL);
}

void anim_para(all_t *all)
{
    anim_part_one(all->game, all);
    anim_part_two(all->game, all);
    anim_part_three(all->game, all);
    anim_ground(all->game, all);
}