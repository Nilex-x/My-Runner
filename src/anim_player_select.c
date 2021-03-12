/*
** EPITECH PROJECT, 2021
** anim_player_select
** File description:
** animate player on menu select
*/

#include "my.h"
#include "my_struct.h"

void state_sakura(select_t *select, all_t *all)
{
    sfTexture *t_player;

    if (all->seconds > 0.1) {
        if (select->r_player[2].left >= 190) {
            select->r_player[2].left = 10;
        } else
            select->r_player[2].left += 37;
        t_player = sfTexture_createFromFile("assets/sakura.png", \
                                            &select->r_player[2]);
        sfSprite_setTexture(select->player[2], t_player, sfFalse);
        free(t_player);
        sfClock_restart(all->clock);
    }
    sfRenderWindow_drawSprite(all->window, select->player[2], NULL);
}

void state_naruto(select_t *select, all_t *all)
{
    sfTexture *t_player;

    if (all->seconds > 0.1) {
        if (select->r_player[0].left >= 195) {
            select->r_player[0].left = 5;
        } else
            select->r_player[0].left += 38;
        t_player = sfTexture_createFromFile("assets/naruto.png", \
                                            &select->r_player[0]);
        sfSprite_setTexture(select->player[0], t_player, sfFalse);
        free(t_player);
        sfClock_restart(all->clock);
    }
    sfRenderWindow_drawSprite(all->window, select->player[0], NULL);
}

void state_kyubi(select_t *select, all_t *all)
{
    sfTexture *t_player;

    if (all->seconds > 0.1) {
        if (select->r_player[4].left >= 171) {
            select->r_player[4].left = 12;
        } else
            select->r_player[4].left += 38;
        t_player = sfTexture_createFromFile("assets/naruto_kyubi.png", \
                                            &select->r_player[4]);
        sfSprite_setTexture(select->player[4], t_player, sfFalse);
        free(t_player);
        sfClock_restart(all->clock);
    }
    sfRenderWindow_drawSprite(all->window, select->player[4], NULL);
}

void state_neji(select_t *select, all_t *all)
{
    sfTexture *t_player;

    if (all->seconds > 0.1) {
        if (select->r_player[3].left >= 171) {
            select->r_player[3].left = 5;
        } else
            select->r_player[3].left += 34;
        t_player = sfTexture_createFromFile("assets/neji.png", \
                                            &select->r_player[3]);
        sfSprite_setTexture(select->player[3], t_player, sfFalse);
        free(t_player);
        sfClock_restart(all->clock);
    }
    sfRenderWindow_drawSprite(all->window, select->player[3], NULL);
}

void state_sasuke(select_t *select, all_t *all)
{
    sfTexture *t_player;

    if (all->seconds > 0.1) {
        if (select->r_player[1].left >= 243) {
            select->r_player[1].left = 13;
        } else
            select->r_player[1].left += 46;
        t_player = sfTexture_createFromFile("assets/sasuke.png", \
                                            &select->r_player[1]);
        sfSprite_setTexture(select->player[1], t_player, sfFalse);
        free(t_player);
        sfClock_restart(all->clock);
    }
    sfRenderWindow_drawSprite(all->window, select->player[1], NULL);
}