/*
** EPITECH PROJECT, 2020
** count_char
** File description:
** count char
*/

int count_char(char *str, char to_find)
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == to_find)
            count++;
    }
    return (count);
}

int count_char_in_tab(char **tab, char to_find)
{
    int count = 0;
    int row = 0;

    for (int t = 0; tab[t]; t++) {
        row++;
        for (int i = 0; tab[t][i]; i++) {
            if (tab[t][i] == to_find)
                count++;
        }
    }
    return (count + row);
}