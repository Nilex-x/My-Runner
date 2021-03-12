/*
** EPITECH PROJECT, 2020
** my_runner
** File description:
** hearth of game
*/

#include "my_struct.h"
#include "my.h"

void display(all_t *all)
{
    sfRenderWindow_display(all->window);
    if (all->i == MENU) {
        verif_music_menu(all);
        display_menu(all);
    }
    if (all->i == GAME) {
        verif_music_game(all);
        display_game(all);
    }
    if (all->i == PAUSE) {
        if (all->game->status_music == 1) {
            all->game->status_music = 0;
            sfMusic_pause(all->m_game);
        }
        display_pause(all);
    }
    if (all->i == SELECT)
        display_select(all);
    if (all->i == END)
        display_end(all);
}

void get_and_set_events(all_t *all)
{
    while (sfRenderWindow_pollEvent(all->window, &all->event)) {
        if (all->event.type == sfEvtClosed)
            sfRenderWindow_close(all->window);
        if (all->i == MENU)
            all->i = sort_button_menu(all->event.mouseButton, \
                                        all->menu, all);
        if (all->i == SELECT) {
            all->i = sort_button_select(all->event.mouseButton, \
                                        all->select);
            sort_arrow(all->event.mouseButton, all->select);
        }
        if (all->i == GAME)
            all->i = sort_button_game(all->event.mouseButton, all);
        if (all->i == PAUSE) {
            all->i = sort_button_p(all->event.mouseButton, \
                                        all->pause, all);
            sort_button_pn(all->event.mouseButton, all->pause, all);
        }
        if (all->i == END)
            all->i = sort_button_end(all->event.mouseButton, all);
    }
}

void game_loop(all_t *all)
{
    load_compoment(all);
    while (sfRenderWindow_isOpen(all->window)) {
        all->time = sfClock_getElapsedTime(all->clock);
        all->seconds = all->time.microseconds / 1000000.0;
        display(all);
        get_and_set_events(all);
    }
    for (int i = 0; all->map[i]; i++)
        free(all->map[i]);
    free(all->map);
    destroy_music(all);
}

int main(int ac, char **av)
{
    all_t all;
    game_t game;
    menu_t menu;
    pause_t pause;
    select_t select;
    end_t end;
    int verif = 0;

    all.game = &game;
    all.menu = &menu;
    all.pause = &pause;
    all.select = &select;
    all.end = &end;
    verif = error_handing(ac, av, &all);
    if (verif == 2) return (0);
    if (verif == 1) return (84);
    game_loop(&all);
    return (0);
}