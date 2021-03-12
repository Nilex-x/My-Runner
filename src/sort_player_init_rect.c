/*
** EPITECH PROJECT, 2021
** sort_player_init_rect
** File description:
** sort player for start jump midle jump and end jump
*/

#include "my.h"
#include "my_struct.h"

void other_start_jump(all_t *all)
{
    sfTexture *texture;

    if (all->game->current_player == 3) {
        texture = sfTexture_createFromFile(NEJI, \
                    &(sfIntRect) {31, 112, 30, 45});
        sfSprite_setTexture(all->game->player[3], texture, sfFalse);
    }
    if (all->game->current_player == 4) {
        texture = sfTexture_createFromFile(KYUBI, \
                    &(sfIntRect) {51, 184, 50, 45});
        sfSprite_setTexture(all->game->player[4], texture, sfFalse);
    }
}

void sort_player_start_jump(all_t *all)
{
    sfTexture *texture;

    if (all->game->current_player == 0) {
        texture = sfTexture_createFromFile(NARUTO, \
                    &(sfIntRect) {233, 200, 37, 44});
        sfSprite_setTexture(all->game->player[0], texture, sfFalse);
    }
    if (all->game->current_player == 1) {
        texture = sfTexture_createFromFile(SASUKE, \
                    &(sfIntRect) {243, 196, 28, 40});
        sfSprite_setTexture(all->game->player[1], texture, sfFalse);
    }
    if (all->game->current_player == 2) {
        texture = sfTexture_createFromFile(SAKURA, \
                    &(sfIntRect) {14, 203, 29, 47});
        sfSprite_setTexture(all->game->player[2], texture, sfFalse);
    }
    other_start_jump(all);
}

void other_midle_jump(all_t *all)
{
    sfTexture *texture;

    if (all->game->current_player == 3) {
        texture = sfTexture_createFromFile(NEJI, \
                    &(sfIntRect) {94, 110, 33, 48});
        sfSprite_setTexture(all->game->player[3], texture, sfFalse);
    }
    if (all->game->current_player == 4) {
        texture = sfTexture_createFromFile(KYUBI, \
                    &(sfIntRect) {99, 183, 28, 33});
        sfSprite_setTexture(all->game->player[4], texture, sfFalse);
    }
}

void sort_player_midle_jump(all_t *all)
{
    sfTexture *texture;

    if (all->game->current_player == 0) {
        texture = sfTexture_createFromFile(NARUTO, \
                    &(sfIntRect) {334, 200, 33, 45});
        sfSprite_setTexture(all->game->player[0], texture, sfFalse);
    }
    if (all->game->current_player == 1) {
        texture = sfTexture_createFromFile(SASUKE, \
                    &(sfIntRect) {324, 193, 29, 45});
        sfSprite_setTexture(all->game->player[1], texture, sfFalse);
    }
    if (all->game->current_player == 2) {
        texture = sfTexture_createFromFile(SAKURA, \
                    &(sfIntRect) {133, 209, 33, 45});
        sfSprite_setTexture(all->game->player[2], texture, sfFalse);
    }
    other_midle_jump(all);
}