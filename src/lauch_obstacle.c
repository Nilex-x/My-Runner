/*
** EPITECH PROJECT, 2021
** launch_obastacle
** File description:
** lauch obstacle in game
*/

#include "my.h"
#include "my_struct.h"

void move_kunai(game_t *game, int i)
{
    sfVector2f pos_kunai = sfSprite_getPosition(game->kunai[i]);

    if (pos_kunai.x != -10) {
        sfSprite_move(game->kunai[i], (sfVector2f) {-15, 0});
    } else {
        sfSprite_setPosition(game->kunai[i], (sfVector2f) {2000, 850});
        return;
    }
    return;
}

void lauch_kunai(game_t *game, all_t *all)
{
    for (int i = 0; i < NBR_KUNAI; i++) {
        if (sfSprite_getPosition(game->kunai[i]).x < 2000)
            move_kunai(game, i);
    }
    if (game->new_obs == 1) {
        for (int i = 0; i < NBR_KUNAI; i++) {
            if (sfSprite_getPosition(game->kunai[i]).x == 2000) {
                move_kunai(game, i);
                break;
            }
        }
        game->new_obs = 0;
    }
    for (int i = 0; i < NBR_KUNAI; i++)
        sfRenderWindow_drawSprite(all->window, all->game->kunai[i], NULL);
}

void update_time_and_score(all_t *all)
{
    all->time_game = sfClock_getElapsedTime(all->clock_game);
    all->game_seconds = all->time_game.microseconds / 1000000.0;
    sfText_setString(all->game->t_time[1], \
    my_int_to_str((int) all->game_seconds));
    sfText_setString(all->game->t_score[1], my_int_to_str(all->game->score));
    sfRenderWindow_drawText(all->window, all->game->t_time[0], NULL);
    sfRenderWindow_drawText(all->window, all->game->t_time[1], NULL);
    sfRenderWindow_drawText(all->window, all->game->t_score[0], NULL);
    sfRenderWindow_drawText(all->window, all->game->t_score[1], NULL);
}