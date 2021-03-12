/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** header
*/

#ifndef MY
#define MY

#define _GNU_SOURCE
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

int count_char(char *str, char to_find);
int my_atoi(char *str);
int my_getnbr_n(char *str, int n);
int my_getnbr(char *str);
char *my_int_to_str(int number);
int my_put_nbr(int nb);
void my_putchar(char c);
void my_putchar_error(char c);
void my_puts(char *str);
int my_putstr(char const *str);
char *my_revstr(char *str);
int my_show_word_array(char * const *tab);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isupper(char const *str);
char **my_str_to_word_array(char *str);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
char *my_strdup(char const *src);
int my_strlen(char const *str);
char *my_strlowcase(char *str);
char *my_strncat(char *dest, char const *src, int n);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strstr(char *str, char const *to_find);
char *my_strupcase(char *str);
int my_strlen_row(char **tab);
int count_char_in_tab(char **tab, char to_find);
int my_strlen_char(char *str, char to_stop, int i);

#endif /* !MY */