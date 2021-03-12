/*
** EPITECH PROJECT, 2020
** manage_user
** File description:
** manage help or error come of user
*/

#include "my.h"
#include "my_struct.h"

int flag_help(void)
{
    my_puts("Welcome to my game !!\n");
    my_puts("DESCRIPTION");
    my_puts("       Naruto Runner is a platforms game.");
    my_puts("       You have to dodge obstacle.");
    my_puts("CONTROLS");
    my_puts("       You have to use space bar for to jump above obstacle");
    my_puts("       you will be the BEST !?\n");
    my_puts("good luck and half fun !\n");
    my_puts("PS: you can create your maps intructions is in files .legend");
}

int error_handing(int ac, char **av, all_t *all)
{
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h' && av[1][2] == '\0') {
        flag_help();
        return (2);
    }
    if (ac != 2) {
        my_putstr("./my_runner: bad arguments: 0 given ");
        my_puts("but 1 is required retry with -h");
        return (1);
    }
    if (av[1][0] == '.') return (1);
    if (open_read_and_verify(av[1], all) == 1) {
        for (int i = 0; all->map[i]; i++)
            free(all->map[i]);
        free(all->map);
        my_puts("FILE: Error Syntax");
        my_puts("look file .legend for see condiction of file map config");
        return (1);
    }
    return (0);
}

void jump_kyubi_move(game_t *game, all_t *all)
{
    sfVector2f pos_player = sfSprite_getPosition(game->player[4]);

    if (game->jump == 1 && pos_player.y > 610)
        sfSprite_move(game->player[4], (sfVector2f) {0, -15});
    if (game->jump == 1 && pos_player.y <= 610) {
        game->jump = 2;
        sort_player_midle_jump(all);
    }
    if (game->jump == 2 && pos_player.y < 810)
        sfSprite_move(game->player[4], (sfVector2f) {0, 15});
    if (game->jump == 2 && pos_player.y >= 810)
        game->jump = 0;

}

void jump(int player, game_t *game, all_t *all)
{
    sfVector2f pos_player = sfSprite_getPosition(game->player[player]);

    if (game->jump == 1 && pos_player.y > 700)
        sfSprite_move(game->player[player], (sfVector2f) {0, -15});
    if (game->jump == 1 && pos_player.y <= 700) {
        game->jump = 2;
        sort_player_midle_jump(all);
    }
    if (game->jump == 2 && pos_player.y < 870)
        sfSprite_move(game->player[player], (sfVector2f) {0, 15});
    if (game->jump == 2 && pos_player.y >= 870)
        game->jump = 0;
}