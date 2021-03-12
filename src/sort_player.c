/*
** EPITECH PROJECT, 2021
** sort_player
** File description:
** sort player for game and menu
*/

#include "my.h"
#include "my_struct.h"

void sort_player_select(all_t *all)
{
    switch (all->select->current_player) {
        case 0:
            state_naruto(all->select, all);
            break;
        case 1:
            state_sasuke(all->select, all);
            break;
        case 2:
            state_sakura(all->select, all);
            break;
        case 3:
            state_neji(all->select, all);
            break;
        case 4:
            state_kyubi(all->select, all);
            break;
    }
}

void sort_player_jump(all_t *all)
{
    switch (all->game->current_player) {
        case 0:
            jump_naruto(all->game, all);
            break;
        case 1:
            jump_sasuke(all->game, all);
            break;
        case 2:
            jump_sakura(all->game, all);
            break;
        case 3:
            jump_neji(all->game, all);
            break;
        case 4:
            jump_kyubi(all->game, all);
            break;
    }
}

void sort_player_game(all_t *all)
{
    switch (all->game->current_player) {
        case 0:
            run_naruto(all->game, all);
            break;
        case 1:
            run_sasuke(all->game, all);
            break;
        case 2:
            run_sakura(all->game, all);
            break;
        case 3:
            run_neji(all->game, all);
            break;
        case 4:
            run_kyubi(all->game, all);
            break;
    }
}