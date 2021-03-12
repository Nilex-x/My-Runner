/*
** EPITECH PROJECT, 2021
** load_paralax
** File description:
** load paralax in sprite
*/

#include "my.h"
#include "my_struct.h"

void para_part_one(game_t *game)
{
    sfTexture *t_back = sfTexture_createFromFile("assets/first.png", \
                                        &(sfIntRect) {0, 0, 272, 160});

    game->back_1[0] = sfSprite_create();
    game->back_1[1] = sfSprite_create();
    sfSprite_setTexture(game->back_1[0], t_back, sfFalse);
    sfSprite_setTexture(game->back_1[1], t_back, sfFalse);
    sfSprite_setScale(game->back_1[0], (sfVector2f) {7.1, 5.5});
    sfSprite_setPosition(game->back_1[1], (sfVector2f) {1920, 0});
    sfSprite_setScale(game->back_1[1], (sfVector2f) {7.1, 5.5});
}

void para_part_two(game_t *game)
{
    sfTexture *t_back = sfTexture_createFromFile("assets/three.png", \
                                    &(sfIntRect) {0, 0, 272, 160});

    game->back_2[0] = sfSprite_create();
    game->back_2[1] = sfSprite_create();
    sfSprite_setTexture(game->back_2[0], t_back, sfFalse);
    sfSprite_setTexture(game->back_2[1], t_back, sfFalse);
    sfSprite_setScale(game->back_2[0], (sfVector2f) {7.1, 5.5});
    sfSprite_setPosition(game->back_2[1], (sfVector2f) {1920, 0});
    sfSprite_setScale(game->back_2[1], (sfVector2f) {7.1, 5.5});
}

void para_part_three(game_t *game)
{
    sfTexture *t_back = sfTexture_createFromFile("assets/second.png", \
                                        &(sfIntRect) {0, 0, 272, 160});

    game->back_3[0] = sfSprite_create();
    game->back_3[1] = sfSprite_create();
    sfSprite_setTexture(game->back_3[0], t_back, sfFalse);
    sfSprite_setTexture(game->back_3[1], t_back, sfFalse);
    sfSprite_setScale(game->back_3[0], (sfVector2f) {7.1, 5.5});
    sfSprite_setPosition(game->back_3[1], (sfVector2f) {1920, 0});
    sfSprite_setScale(game->back_3[1], (sfVector2f) {7.1, 5.5});
}

void para_ground(game_t *game)
{
    sfTexture *t_back = sfTexture_createFromFile("assets/ground_1.png", \
                                    &(sfIntRect) {0, 800, 1920, 300});

    game->ground[0] = sfSprite_create();
    game->ground[1] = sfSprite_create();
    sfSprite_setTexture(game->ground[0], t_back, sfFalse);
    sfSprite_setPosition(game->ground[0], (sfVector2f) {0, 880});
    sfSprite_setScale(game->ground[0], (sfVector2f) {1, 0.7});
    sfSprite_setTexture(game->ground[1], t_back, sfFalse);
    sfSprite_setPosition(game->ground[1], (sfVector2f) {1920, 880});
    sfSprite_setScale(game->ground[1], (sfVector2f) {1, 0.7});
}