/*
** EPITECH PROJECT, 2021
** create_sound
** File description:
** create sound and verify
*/

#include "my.h"
#include "my_struct.h"

void create_sound_menu(all_t *all)
{
    all->m_menu = sfMusic_createFromFile("assets/music_menu.ogg");
    all->m_game = sfMusic_createFromFile("assets/music_game.ogg");
    sfMusic_setLoop(all->m_menu, sfTrue);
    sfMusic_setLoop(all->m_game, sfTrue);
    //sfMusic_setVolume(all->m_menu, 20);
    //sfMusic_setVolume(all->m_game, 20);
    sfMusic_play(all->m_menu);
}

void verif_music_menu(all_t *all)
{
    sfMusic_stop(all->m_game);
    if (all->menu->music_status == 0) {
        all->menu->music_status = 1;
        sfMusic_play(all->m_menu);
    }
}

void verif_music_game(all_t *all)
{
    if (all->menu->music_status == 1) {
        all->menu->music_status = 0;
        sfMusic_stop(all->m_menu);
    }
    if (all->game->status_music == 0) {
        all->game->status_music = 1;
        sfMusic_play(all->m_game);
    }
}

void destroy_music(all_t *all)
{
    sfMusic_destroy(all->m_menu);
    sfMusic_destroy(all->m_game);
    sfRenderWindow_destroy(all->window);
}