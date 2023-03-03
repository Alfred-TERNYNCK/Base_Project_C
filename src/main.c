/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** if you code on paper, you're not a real programmer
*/

#include <stdio.h>
#include <unistd.h>
#include "../include/my.h"

int main(void)
{
    char *buffer = "Hello World! how are u ? :D ";
    char **tab = my_str_to_word_array(buffer, " ");
    for (int i = 0; tab[i] != NULL; i++)
        printf("%s\n", tab[i]);
    return (0);
}
