/*
** EPITECH PROJECT, 2021
** open_and_verify_files
** File description:
** open files given an argument and verify containt
*/

#include "my.h"
#include "my_struct.h"

int verify_string(char *str)
{
    int verif = 0;

    for (int i = 0; str[i]; i++) {
        if (str[i] != ':')
            verif++;
        if (str[i] != ',')
            verif++;
        if (str[i] < '0' || str[i] > '9')
            verif++;
        if (verif == 3)
            return (1);
        verif = 0;
    }
    return (0);
}

int verify_containt_file(char **tab)
{
    for (int i = 0; tab[i]; i++)
        if (verify_string(tab[i]) == 1) return (1);
    return (0);
}

void load_tab_of_struct(char **tab , all_t *all)
{
    int index_tab = 0;
    int index_str = 0;
    int nbr = 0;
    int row = count_char_in_tab(tab, ',');

    all->map = malloc(sizeof(char *) * row + 1);
    for (int i = 0; i < row; i++) {
        nbr = my_strlen_char(tab[index_tab], ',', index_str);
        all->map[i] = malloc(sizeof(char) * nbr + 1);
        for (int t = 0; t < nbr ; t++, index_str++) {
            all->map[i][t] = tab[index_tab][index_str];
            all->map[i][t + 1] = '\0';
        }
        if (tab[index_tab][index_str] == '\0') {
            index_tab++;
            index_str = 0;
        } else
            index_str++;
        all->map[i + 1] = NULL;
    }
}

int open_read_and_verify(char *filename, all_t *all)
{
    FILE *fd = fopen(filename, "r");
    char *temp = NULL;
    char **tab = NULL;
    size_t len = 0;
    ssize_t read;

    if (fd == NULL) return (1);
    read = getline(&temp, &len, fd);
    tab = malloc(sizeof(char *) * 10);
    for (int i = 0; read != -1; i++) {
        temp[read - 1] = '\0';
        tab[i] = my_strdup(temp);
        tab[i + 1] = NULL;
        read = getline(&temp, &len, fd);
    }
    free(temp);
    fclose(fd);
    if (verify_containt_file(tab) == 1) return (1);
    load_tab_of_struct(tab, all);
    return (0);
}