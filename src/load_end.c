/*
** EPITECH PROJECT, 2021
** load_end
** File description:
** load end game
*/

#include "my_struct.h"
#include "my.h"

void load_button_start_end(end_t *end)
{
    sfIntRect pos = {0, 0, 190, 49};
    sfTexture *t_play = sfTexture_createFromFile("assets/button.png", \
                                                &pos);
    sfFont *font;

    end->t_play = sfText_create();
    end->s_play = sfSprite_create();
    font = sfFont_createFromFile("assets/Games.ttf");
    sfText_setString(end->t_play, "RETRY");
    sfText_setFont(end->t_play, font);
    sfText_setStyle(end->t_play, sfTextBold);
    sfText_setScale(end->t_play, (sfVector2f) {1.5, 1.5});
    sfText_setPosition(end->t_play, (sfVector2f) {890, 585});
    sfSprite_setTexture(end->s_play, t_play, sfFalse);
    free(t_play);
    sfSprite_setOrigin(end->s_play, (sfVector2f) {95, 24.5});
    sfSprite_setScale(end->s_play, (sfVector2f) {1.5, 1.5});
    sfSprite_setPosition(end->s_play, (sfVector2f) {960, 620});
}

void load_button_quit_end(end_t *end)
{
    sfIntRect pos = {0, 0, 190, 49};
    sfTexture *t_play = sfTexture_createFromFile("assets/button.png", \
                                                &pos);
    sfFont *font;

    end->t_quit = sfText_create();
    end->s_quit = sfSprite_create();
    font = sfFont_createFromFile("assets/Games.ttf");
    sfText_setString(end->t_quit, "EXIT");
    sfText_setFont(end->t_quit, font);
    sfText_setStyle(end->t_quit, sfTextBold);
    sfText_setScale(end->t_quit, (sfVector2f) {1.5, 1.5});
    sfText_setPosition(end->t_quit, (sfVector2f) {910, 700});
    sfSprite_setTexture(end->s_quit, t_play, sfFalse);
    free(t_play);
    sfSprite_setOrigin(end->s_quit, (sfVector2f) {95, 24.5});
    sfSprite_setScale(end->s_quit, (sfVector2f) {1.5, 1.5});
    sfSprite_setPosition(end->s_quit, (sfVector2f) {960, 735});
}

void load_logo_end(end_t *end)
{
    sfIntRect pos = {0, 0, 300, 188};
    sfTexture *t_logo = sfTexture_createFromFile("assets/logo_naruto.png", \
                                                                    &pos);
    sfFont *font = sfFont_createFromFile("assets/Games.ttf");

    end->t_end = sfText_create();
    end->s_logo = sfSprite_create();
    sfText_setFont(end->t_end, font);
    sfText_setString(end->t_end, "GAME OVER");
    sfText_setColor(end->t_end, sfRed);
    sfText_setStyle(end->t_end, sfTextBold);
    sfText_setPosition(end->t_end, (sfVector2f) {800, 350});
    sfText_setScale(end->t_end, (sfVector2f) {2, 2});
    sfSprite_setTexture(end->s_logo, t_logo, sfFalse);
    free(t_logo);
    sfSprite_setPosition(end->s_logo, (sfVector2f) {960, 200});
    sfSprite_setOrigin(end->s_logo, (sfVector2f) {150, 94});
    sfSprite_setScale(end->s_logo, (sfVector2f) {1.2, 1.2});
}

void load_end(end_t *end)
{
    load_button_quit_end(end);
    load_button_start_end(end);
    load_logo_end(end);
}