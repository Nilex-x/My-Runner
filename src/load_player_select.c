/*
** EPITECH PROJECT, 2021
** load_player_select
** File description:
** load all player for select menu
*/

#include "my.h"
#include "my_struct.h"

void load_sakura_select(game_t *game, select_t *select)
{
    sfTexture *t_player = sfTexture_createFromFile(SAKURA, \
                                    &(sfIntRect) {10, 20, 30, 60});

    select->r_player[2] = (sfIntRect) {10, 20, 30, 60};
    select->player[2] = sfSprite_create();
    sfSprite_setTexture(select->player[2], t_player, sfFalse);
    sfSprite_setOrigin(select->player[2], (sfVector2f) {15, 30});
    sfSprite_setPosition(select->player[2], (sfVector2f) {950, 500});
    sfSprite_setScale(select->player[2], (sfVector2f) {10, 10});
    free(t_player);
}

void load_naruto_select(game_t *game, select_t *select)
{
    sfTexture *t_player = sfTexture_createFromFile(NARUTO, \
                                &(sfIntRect) {5, 10, 35, 60});
    sfTexture *t_kyubi = sfTexture_createFromFile(KYUBI, \
                                &(sfIntRect) {12, 10, 40, 60});

    select->r_player[0] = (sfIntRect) {5, 10, 35, 60};
    select->r_player[4] = (sfIntRect) {12, 10, 40, 60};
    select->player[0] = sfSprite_create();
    select->player[4] = sfSprite_create();
    sfSprite_setTexture(select->player[0], t_player, sfFalse);
    sfSprite_setOrigin(select->player[0], (sfVector2f) {15, 30});
    sfSprite_setPosition(select->player[0], (sfVector2f) {950, 550});
    sfSprite_setScale(select->player[0], (sfVector2f) {10, 10});
    sfSprite_setTexture(select->player[4], t_kyubi, sfFalse);
    sfSprite_setOrigin(select->player[4], (sfVector2f) {15, 30});
    sfSprite_setPosition(select->player[4], (sfVector2f) {900, 490});
    sfSprite_setScale(select->player[4], (sfVector2f) {14, 14});
    free(t_player);
}

void load_sasuke_select(game_t *game, select_t *select)
{
    sfTexture *t_player = sfTexture_createFromFile(SASUKE, \
                                    &(sfIntRect) {13, 10, 37, 60});

    select->r_player[1] = (sfIntRect) {13, 10, 37, 60};
    select->player[1] = sfSprite_create();
    sfSprite_setTexture(select->player[1], t_player, sfFalse);
    sfSprite_setOrigin(select->player[1], (sfVector2f) {15, 30});
    sfSprite_setPosition(select->player[1], (sfVector2f) {950, 550});
    sfSprite_setScale(select->player[1], (sfVector2f) {10, 10});
    free(t_player);
}

void load_neji_select(game_t *game, select_t *select)
{
    sfTexture *t_player = sfTexture_createFromFile(NEJI, \
                                    &(sfIntRect) {5, 20, 30, 60});

    select->r_player[3] = (sfIntRect) {5, 20, 30, 60};
    select->player[3] = sfSprite_create();
    sfSprite_setTexture(select->player[3], t_player, sfFalse);
    sfSprite_setOrigin(select->player[3], (sfVector2f) {15, 30});
    sfSprite_setPosition(select->player[3], (sfVector2f) {950, 500});
    sfSprite_setScale(select->player[3], (sfVector2f) {10, 10});
    free(t_player);
}

void load_player_select(all_t *all)
{
    load_sakura_select(all->game, all->select);
    load_sasuke_select(all->game, all->select);
    load_naruto_select(all->game, all->select);
    load_neji_select(all->game, all->select);
}