/*
** EPITECH PROJECT, 2021
** sort_button_select
** File description:
** sort button of select menu
*/

#include "my.h"
#include "my_struct.h"

int sort_button_select(sfMouseButtonEvent mouse, select_t *select)
{
    sfVector2f pos_play = sfSprite_getPosition(select->s_return);
    if ((mouse.x <= (int) pos_play.x + 100 &&
        mouse.x >= (int) pos_play.x - 100 &&
        mouse.y <= (int) pos_play.y + 30 &&
        mouse.y >= (int) pos_play.y - 30) &&
        mouse.button == sfMouseLeft)
        return (MENU);
    pos_play = sfSprite_getPosition(select->s_confirm);
    if ((mouse.x <= (int) pos_play.x + 100 &&
        mouse.x >= (int) pos_play.x - 100 &&
        mouse.y <= (int) pos_play.y + 30 &&
        mouse.y >= (int) pos_play.y - 30) &&
        mouse.button == sfMouseLeft)
        return (GAME);
    return (SELECT);
}

void analysis_click(select_t *select)
{
    if (select->current_player < 0)
        select->current_player = 4;
    if (select->current_player > 4)
        select->current_player = 0;
    return;
}

void sort_key(sfMouseButtonEvent mouse, select_t *select)
{
    if (sfKeyboard_isKeyPressed(sfKeyRight)) {
        select->current_player++;
        analysis_click(select);
    }
    if (sfKeyboard_isKeyPressed(sfKeyLeft)) {
        select->current_player--;
        analysis_click(select);
    }
}

void sort_arrow(sfMouseButtonEvent mouse, select_t *select)
{
    sfVector2f pos_play = sfSprite_getPosition(select->arrow_next);
    if ((mouse.x <= (int) pos_play.x + 100 &&
        mouse.x >= (int) pos_play.x - 100 &&
        mouse.y <= (int) pos_play.y + 50 &&
        mouse.y >= (int) pos_play.y - 50) &&
        sfMouse_isButtonPressed(sfMouseLeft)) {
            select->current_player++;
        analysis_click(select);
    }
    pos_play = sfSprite_getPosition(select->arrow_previous);
    if ((mouse.x <= (int) pos_play.x + 100 &&
        mouse.x >= (int) pos_play.x - 100 &&
        mouse.y <= (int) pos_play.y + 50 &&
        mouse.y >= (int) pos_play.y - 50) &&
        sfMouse_isButtonPressed(sfMouseLeft)) {
        select->current_player--;
        analysis_click(select);
    }
    sort_key(mouse, select);
    return;
}