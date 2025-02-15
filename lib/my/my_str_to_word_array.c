/*
** EPITECH PROJECT, 2023
** my_putchar
** File description:
** print a char into console
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int is_printable(char c)
{
    if (c != ' ' && c != '\t' && c != '\0' && c != '\v')
        return 1;
    return 0;
}

int nb_words(char *str)
{
    int i = 0;
    int count = 0;

    for (; str[i] != '\0'; i++)
        if (is_printable(str[i]) == 1 && is_printable(str[i + 1]) == 0)
            count++;
    return count;
}

int len_word(char *str)
{
    int i = 0;
    for (; is_printable(str[i]) == 1; i++);
    return i + 1;
}

char **feed_tab(char *str, char **tab)
{
    int i = 0; int x = 0; int y = 0; int l_word = 0;

    for (;str[i] != '\0';) {
        for (;is_printable(str[i]) == 0; i++);
        l_word = len_word(str + i);
        tab[x] = malloc(sizeof(char) * l_word);
        for (;l_word > 1; l_word--) {
            tab[x][y] = str[i];
            y++;
            i++;
        }
        tab[x][y] = '\0';
        y = 0;
        x++;
        i++;
    }
    tab[x] = NULL;
    return tab;
}

char **my_str_to_word_array(char *str, char *delim)
{
    char **tab = malloc(sizeof(char *) * (nb_words(str) + 1));
    tab = feed_tab(str, tab);
    return tab;
}
