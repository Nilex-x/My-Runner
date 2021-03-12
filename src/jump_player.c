/*
** EPITECH PROJECT, 2021
** jump_player.c
** File description:
** animate jump of player
*/

#include "my.h"
#include "my_struct.h"

void jump_sakura(game_t *game, all_t *all)
{
    jump(2, game, all);
    sfRenderWindow_drawSprite(all->window, game->player[2], NULL);
}

void jump_naruto(game_t *game, all_t *all)
{
    jump(0, game, all);
    sfRenderWindow_drawSprite(all->window, game->player[0], NULL);
}

void jump_kyubi(game_t *game, all_t *all)
{
    jump_kyubi_move(game, all);
    sfRenderWindow_drawSprite(all->window, game->player[4], NULL);
}

void jump_neji(game_t *game, all_t *all)
{
    jump(3, game, all);
    sfRenderWindow_drawSprite(all->window, game->player[3], NULL);
}

void jump_sasuke(game_t *game, all_t *all)
{
    jump(1, game, all);
    sfRenderWindow_drawSprite(all->window, game->player[1], NULL);
}