/*
** EPITECH PROJECT, 2021
** load_player_game
** File description:
** load all player for game
*/

#include "my.h"
#include "my_struct.h"

void load_sakura_game(game_t *game)
{
    sfTexture *t_player = sfTexture_createFromFile(SAKURA, \
                                    &(sfIntRect) {330, 123, 45, 60});

    game->player[2] = sfSprite_create();
    game->r_player[2] = (sfIntRect) {330, 123, 45, 60};
    sfSprite_setTexture(game->player[2], t_player, sfFalse);
    sfSprite_setOrigin(game->player[2], (sfVector2f) {22.5, 30});
    sfSprite_setPosition(game->player[2], (sfVector2f) {400, 870});
    sfSprite_setScale(game->player[2], (sfVector2f) {3, 3});
    free(t_player);
}

void load_naruto_game(game_t *game)
{
    sfTexture *t_player = sfTexture_createFromFile(NARUTO, \
                                &(sfIntRect) {279, 119, 47, 60});
    sfTexture *t_kyubi = sfTexture_createFromFile(KYUBI, \
                                &(sfIntRect) {11, 133, 42, 33});

    game->player[0] = sfSprite_create();
    game->player[4] = sfSprite_create();
    game->r_player[0] = (sfIntRect) {279, 119, 47, 60};
    game->r_player[4] = (sfIntRect) {11, 133, 42, 33};
    sfSprite_setTexture(game->player[0], t_player, sfFalse);
    sfSprite_setOrigin(game->player[0], (sfVector2f) {15, 30});
    sfSprite_setPosition(game->player[0], (sfVector2f) {400, 870});
    sfSprite_setScale(game->player[0], (sfVector2f) {3, 3});
    sfSprite_setTexture(game->player[4], t_kyubi, sfFalse);
    sfSprite_setOrigin(game->player[4], (sfVector2f) {18.5, 16.5});
    sfSprite_setPosition(game->player[4], (sfVector2f) {400, 810});
    sfSprite_setScale(game->player[4], (sfVector2f) {5, 5});
    free(t_player);
}

void load_sasuke_game(game_t *game)
{
    sfTexture *t_player = sfTexture_createFromFile(SASUKE, \
                                    &(sfIntRect) {319, 102, 40, 60});

    game->player[1] = sfSprite_create();
    game->r_player[1] = (sfIntRect) {319, 102, 40, 60};
    sfSprite_setTexture(game->player[1], t_player, sfFalse);
    sfSprite_setOrigin(game->player[1], (sfVector2f) {15, 30});
    sfSprite_setPosition(game->player[1], (sfVector2f) {400, 870});
    sfSprite_setScale(game->player[1], (sfVector2f) {3, 3});
    free(t_player);
}

void load_neji_game(game_t *game)
{
    sfTexture *t_player = sfTexture_createFromFile(NEJI, \
                                    &(sfIntRect) {278, 37, 38, 60});

    game->player[3] = sfSprite_create();
    game->r_player[3] = (sfIntRect) {278, 37, 38, 60};
    sfSprite_setTexture(game->player[3], t_player, sfFalse);
    sfSprite_setOrigin(game->player[3], (sfVector2f) {17.5, 30});
    sfSprite_setPosition(game->player[3], (sfVector2f) {400, 870});
    sfSprite_setScale(game->player[3], (sfVector2f) {3, 3});
    free(t_player);
}

void load_player_game(all_t *all)
{
    load_sakura_game(all->game);
    load_sasuke_game(all->game);
    load_naruto_game(all->game);
    load_neji_game(all->game);
}