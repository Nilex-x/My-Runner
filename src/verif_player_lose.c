/*
** EPITECH PROJECT, 2021
** verif_player_lose
** File description:
** verif if player is touch by obstacle
*/

#include "my.h"
#include "my_struct.h"

int verif_kunai(sfVector2f pos_player, sfVector2f pos_obs) //399.5, 70.5
{
    if (pos_obs.x - 30 <= (int) pos_player.x + 30 &&
        pos_obs.x + 30 >= (int) pos_player.x  - 30 &&
        pos_obs.y - 10 <= (int) pos_player.y + 25 &&
        pos_obs.y + 10 >= (int) pos_player.y - 25)
        return (1);
    return (0);
}

void verif_player_touch_obs(all_t *all)
{
    sfVector2f pos_playerer = sfSprite_getPosition(\
    all->game->player[all->game->current_player]);
    sfVector2f pos_obs;

    for (int i = 0; i < NBR_KUNAI; i++) {
        pos_obs = sfSprite_getPosition(all->game->kunai[i]);
        if (verif_kunai(pos_playerer, pos_obs) == 1) {
            all->i = END;
            return;
        }
        if (pos_obs.x < 0) {
            all->game->score += 100;
        }
    }
}