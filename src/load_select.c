/*
** EPITECH PROJECT, 2021
** load_select
** File description:
** load menu select player
*/

#include "my.h"
#include "my_struct.h"

void load_arrow_next(select_t *select)
{
    sfTexture *t_next = sfTexture_createFromFile("assets/Arrow.png", \
                                    &(sfIntRect) {40, 45, 110, 100});

    select->arrow_next = sfSprite_create();
    sfSprite_setTexture(select->arrow_next, t_next, sfFalse);
    sfSprite_setOrigin(select->arrow_next, (sfVector2f) {55, 50});
    sfSprite_setPosition(select->arrow_next, (sfVector2f) {1250, 500});
    free(t_next);
}

void load_arrow_previous(select_t *select)
{
    sfTexture *t_next = sfTexture_createFromFile("assets/Arrow.png", \
                                    &(sfIntRect) {45, 252, 110, 100});

    select->arrow_previous = sfSprite_create();
    sfSprite_setTexture(select->arrow_previous, t_next, sfFalse);
    sfSprite_setOrigin(select->arrow_previous, (sfVector2f) {55, 50});
    sfSprite_setPosition(select->arrow_previous, (sfVector2f) {650, 500});
    free(t_next);
}

void load_button_return(select_t *select)
{
    sfIntRect pos = {0, 0, 190, 49};
    sfTexture *t_play = sfTexture_createFromFile("assets/button.png",
                                                &pos);
    sfFont *font;

    select->t_return = sfText_create();
    select->s_return = sfSprite_create();
    font = sfFont_createFromFile("assets/Games.ttf");
    sfText_setString(select->t_return, "RETOUR");
    sfText_setFont(select->t_return, font);
    sfText_setStyle(select->t_return, sfTextBold);
    sfText_setScale(select->t_return, (sfVector2f) {1.5, 1.5});
    sfText_setPosition(select->t_return, (sfVector2f) {620, 865});
    sfSprite_setTexture(select->s_return, t_play, sfFalse);
    free(t_play);
    sfSprite_setOrigin(select->s_return, (sfVector2f) {95, 24.5});
    sfSprite_setScale(select->s_return, (sfVector2f) {1.5, 1.5});
    sfSprite_setPosition(select->s_return, (sfVector2f) {700, 900});
}

void load_button_confirm(select_t *select)
{
    sfIntRect pos = {0, 0, 190, 49};
    sfTexture *t_play = sfTexture_createFromFile("assets/button.png",
                                                &pos);
    sfFont *font;

    select->t_confirm = sfText_create();
    select->s_confirm = sfSprite_create();
    font = sfFont_createFromFile("assets/Games.ttf");
    sfText_setString(select->t_confirm, "JOUER");
    sfText_setFont(select->t_confirm, font);
    sfText_setStyle(select->t_confirm, sfTextBold);
    sfText_setScale(select->t_confirm, (sfVector2f) {1.5, 1.5});
    sfText_setPosition(select->t_confirm, (sfVector2f) {1135, 865});
    sfSprite_setTexture(select->s_confirm, t_play, sfFalse);
    free(t_play);
    sfSprite_setOrigin(select->s_confirm, (sfVector2f) {95, 24.5});
    sfSprite_setScale(select->s_confirm, (sfVector2f) {1.5, 1.5});
    sfSprite_setPosition(select->s_confirm, (sfVector2f) {1200, 900});
}

void load_select(all_t *all)
{
    load_arrow_next(all->select);
    load_arrow_previous(all->select);
    load_button_return(all->select);
    load_button_confirm(all->select);
}