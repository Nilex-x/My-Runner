/*
** EPITECH PROJECT, 2020
** sort_button
** File description:
** sort button
*/

#include "my_struct.h"
#include "my.h"

int sort_button_menu(sfMouseButtonEvent mouse, menu_t *menu, all_t *all)
{
    sfVector2f pos_play = sfSprite_getPosition(menu->s_play);
    if ((mouse.x <= (int) pos_play.x + 100 &&
        mouse.x >= (int) pos_play.x - 100 &&
        mouse.y <= (int) pos_play.y + 30 &&
        mouse.y >= (int) pos_play.y - 30) &&
        sfMouse_isButtonPressed(sfMouseLeft))
        return (SELECT);
    pos_play = sfSprite_getPosition(menu->s_quit);
    if ((mouse.x <= (int) pos_play.x + 100 &&
        mouse.x >= (int) pos_play.x - 100 &&
        mouse.y <= (int) pos_play.y + 30 &&
        mouse.y >= (int) pos_play.y - 30) &&
        sfMouse_isButtonPressed(sfMouseLeft))
        sfRenderWindow_close(all->window);
    return (MENU);
}

int sort_button_game(sfMouseButtonEvent mouse, all_t *all)
{
    if (sfKeyboard_isKeyPressed(sfKeyEscape))
        return (PAUSE);
    if (sfKeyboard_isKeyPressed(sfKeySpace) && all->game->jump == 0) {
        sort_player_start_jump(all);
        all->game->jump = 1;
    }
    if (sfKeyboard_isKeyPressed(sfKeyF))
        all->game->new_obs = 1;
    return (GAME);
}

void sort_button_pn(sfMouseButtonEvent mouse, pause_t *pause, all_t *all)
{
    sfVector2f pos_play = sfSprite_getPosition(pause->s_quit);
    if ((mouse.x <= (int) pos_play.x + 100 &&
        mouse.x >= (int) pos_play.x - 100 &&
        mouse.y <= (int) pos_play.y + 30 &&
        mouse.y >= (int) pos_play.y - 30) &&
        mouse.button == sfMouseLeft)
        sfRenderWindow_close(all->window);
}

int sort_button_end(sfMouseButtonEvent mouse, all_t *all)
{
    sfVector2f pos_play = sfSprite_getPosition(all->end->s_play);
    if ((mouse.x <= (int) pos_play.x + 100 &&
        mouse.x >= (int) pos_play.x - 100 &&
        mouse.y <= (int) pos_play.y + 30 &&
        mouse.y >= (int) pos_play.y - 30) &&
        sfMouse_isButtonPressed(sfMouseLeft)) {
        destroy_music(all);
        load_compoment(all);
        return (MENU);
        }
    pos_play = sfSprite_getPosition(all->end->s_quit);
    if ((mouse.x <= (int) pos_play.x + 100 &&
        mouse.x >= (int) pos_play.x - 100 &&
        mouse.y <= (int) pos_play.y + 30 &&
        mouse.y >= (int) pos_play.y - 30) &&
        sfMouse_isButtonPressed(sfMouseLeft))
        sfRenderWindow_close(all->window);
    return (END);
}

int sort_button_p(sfMouseButtonEvent mouse, pause_t *pause, all_t *all)
{
    sfVector2f pos_play = sfSprite_getPosition(pause->s_resume);
    if ((mouse.x <= (int) pos_play.x + 100 &&
        mouse.x >= (int) pos_play.x - 100 &&
        mouse.y <= (int) pos_play.y + 30 &&
        mouse.y >= (int) pos_play.y - 30) &&
        sfMouse_isButtonPressed(sfMouseLeft))
        return (GAME);
    pos_play = sfSprite_getPosition(pause->s_menu);
    if ((mouse.x <= (int) pos_play.x + 100 &&
        mouse.x >= (int) pos_play.x - 100 &&
        mouse.y <= (int) pos_play.y + 30 &&
        mouse.y >= (int) pos_play.y - 30) &&
        sfMouse_isButtonPressed(sfMouseLeft))
        return (MENU);
    return (PAUSE);
}