/*
** EPITECH PROJECT, 2020
** my_strlen
** File description:
** count char in string
*/

int my_strlen(char const *str)
{
    int total = 0;

    if (str == 0)
        return (0);
    for (int i = 0; str[i] != '\0'; i++)
        total++;
    return (total);
}

int my_strlen_row(char **tab)
{
    int i = 0;
    while (tab[i])
        i++;
    return (i);
}

int my_strlen_char(char *str, char to_stop, int i)
{
    int count = 0;

    for (; str[i] != to_stop && str[i] != '\0'; i++) {
        count++;
    }
    return (count);
}