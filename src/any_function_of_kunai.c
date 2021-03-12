/*
** EPITECH PROJECT, 2021
** load_obstacle
** File description:
** load obstacle
*/

#include "my_struct.h"
#include "my.h"

void load_kunai(game_t *game)
{
    sfTexture *texture = sfTexture_createFromFile("assets/kunai.png", \
                                        &(sfIntRect) {0, 0, 799, 141});

    game->kunai[0] = sfSprite_create();
    game->kunai[1] = sfSprite_create();
    game->kunai[2] = sfSprite_create();
    game->kunai[3] = sfSprite_create();
    game->kunai[4] = sfSprite_create();
    sfSprite_setTexture(game->kunai[0], texture, sfFalse);
    free(texture);
    sfSprite_setOrigin(game->kunai[0], (sfVector2f) {399.5, 70.5});
    sfSprite_setScale(game->kunai[0], (sfVector2f) {0.1, 0.1});
    sfSprite_setPosition(game->kunai[0], (sfVector2f) {2000, 850});
    for (int i = 1; i < NBR_KUNAI; i++) {
        game->kunai[i] = sfSprite_copy(game->kunai[0]);
    }
}

void search_time(all_t *all, int i)
{
    int t = 0;
    int time = 0;

    while (all->map[i][t] != ':')
        t++;
    t++;
    time = my_getnbr_n(all->map[i], t);
    if ((int) all->game_seconds == time)
        all->game->new_obs = 1;
}

void auto_lauch_kunai(all_t *all)
{
    for (int i = 0; all->map[i]; i++)
        search_time(all, i);
}

void print_all_game(all_t *all)
{
    sfRenderWindow_drawSprite(all->window, \
    all->game->player[all->game->current_player], NULL);
    for (int i = 0; i < NBR_KUNAI; i++)
        sfRenderWindow_drawSprite(all->window, all->game->kunai[i], NULL);
}
