/*
** EPITECH PROJECT, 2020
** load_menu
** File description:
** load componement of menu
*/

#include "my_struct.h"
#include "my.h"

void load_button_start(menu_t *menu)
{
    sfIntRect pos = {0, 0, 190, 49};
    sfTexture *t_play = sfTexture_createFromFile("assets/button.png",
                                                &pos);
    sfVector2f posi = {960, 400};
    sfFont *font;

    menu->t_play = sfText_create();
    menu->s_play = sfSprite_create();
    font = sfFont_createFromFile("assets/Games.ttf");
    sfText_setString(menu->t_play, "PLAY");
    sfText_setFont(menu->t_play, font);
    sfText_setStyle(menu->t_play, sfTextBold);
    sfText_setScale(menu->t_play, (sfVector2f) {1.5, 1.5});
    sfText_setPosition(menu->t_play, (sfVector2f) {900, 365});
    sfSprite_setTexture(menu->s_play, t_play, sfFalse);
    free(t_play);
    sfSprite_setOrigin(menu->s_play, (sfVector2f) {95, 24.5});
    sfSprite_setScale(menu->s_play, (sfVector2f) {1.5, 1.5});
    sfSprite_setPosition(menu->s_play, posi);
}

void load_button_quit(menu_t *menu)
{
    sfIntRect pos = {0, 0, 190, 49};
    sfTexture *t_play = sfTexture_createFromFile("assets/button.png",
                                                &pos);
    sfVector2f posi = {960, 500};
    sfFont *font;

    menu->t_quit = sfText_create();
    menu->s_quit = sfSprite_create();
    font = sfFont_createFromFile("assets/Games.ttf");
    sfText_setString(menu->t_quit, "EXIT");
    sfText_setFont(menu->t_quit, font);
    sfText_setStyle(menu->t_quit, sfTextBold);
    sfText_setScale(menu->t_quit, (sfVector2f) {1.5, 1.5});
    sfText_setPosition(menu->t_quit, (sfVector2f) {900, 465});
    sfSprite_setTexture(menu->s_quit, t_play, sfFalse);
    free(t_play);
    sfSprite_setOrigin(menu->s_quit, (sfVector2f) {95, 24.5});
    sfSprite_setScale(menu->s_quit, (sfVector2f) {1.5, 1.5});
    sfSprite_setPosition(menu->s_quit, posi);
}

void load_logo(menu_t *menu)
{
    sfIntRect pos = {0, 0, 300, 188};
    sfTexture *t_logo = sfTexture_createFromFile("assets/logo_naruto.png", \
                                                                    &pos);

    menu->s_logo = sfSprite_create();
    sfSprite_setTexture(menu->s_logo, t_logo, sfFalse);
    free(t_logo);
    sfSprite_setOrigin(menu->s_logo, (sfVector2f) {150, 94});
    sfSprite_setScale(menu->s_logo, (sfVector2f) {1.2, 1.2});
}

void load_back_menu(menu_t *menu)
{
    sfTexture *t_back = sfTexture_createFromFile("assets/parallax.png", \
                                            &(sfIntRect) {0, 0, 272, 160});
    sfTexture *t_ground = sfTexture_createFromFile("assets/ground_1.png", \
                                            &(sfIntRect) {0, 800, 1920, 300});

    menu->back_menu = sfSprite_create();
    menu->back_ground = sfSprite_create();
    sfSprite_setTexture(menu->back_menu, t_back, sfFalse);
    sfSprite_setTexture(menu->back_ground, t_ground, sfFalse);
    sfSprite_setScale(menu->back_menu, (sfVector2f) {7.1, 5.5});
    sfSprite_setPosition(menu->back_ground, (sfVector2f) {0, 880});
    sfSprite_setScale(menu->back_ground, (sfVector2f) {1, 0.7});
}

void load_menu(menu_t *menu)
{
    load_button_quit(menu);
    load_button_start(menu);
    load_logo(menu);
    load_back_menu(menu);
}