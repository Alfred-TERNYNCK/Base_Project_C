/*
** EPITECH PROJECT, 2022
** main for stumper
** File description:
** Final stumper C pool
*/

#include "my.h"
#include "proto.h"
#include "utils.h"

char *my_convert_base(char *nbr, char *base_from, char *base_to)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int len = my_strlen(base_from);
    int len2 = my_strlen(base_to);
    int nb = my_getnbr(nbr);
    int nb2 = nb;
    int nb3 = nb;
    char *result = malloc(sizeof(char) * 100);

    while (nb2 > 0) {
        nb2 = nb2 / len2;
        i++;
    }
    result[i] = '\0';
    while (nb > 0) {
        result[i - 1] = base_to[nb % len2];
        nb = nb / len2;
        i--;
    }
    return result;
}

int my_pow(int nb, int p)
{
    int result = 1;

    for (int i = 0; i < p; i++)
        result = result * nb;
    return result;
}

int my_intlen(int nb)
{
    int i = 0;

    while (nb > 0) {
        nb = nb / 10;
        i++;
    }
    return i;
}
