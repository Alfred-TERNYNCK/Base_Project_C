/*
** EPITECH PROJECT, 2022
** main for stumper
** File description:
** Final stumper C pool
*/

#include "my.h"
#include "proto.h"
#include "utils.h"

int main (int ac, char **av)
{
    int j = 0;
    if (ac == 2) {
        if (init(av[1]) == 84)
            return 84;
        return 0;
    } else {
        my_putstr("Usage: ./push_swap [file] or ./push_swap [number] [number] [number] ...\n");
        return 84;
    }
    // for (int i = 1; av[i] != '\0' && ac > 1; i++) {
    //     int *list = malloc(sizeof(int) * ac - 1);
    //     if (is_a_number(av[i]) != 1) {
    //         list[j] = my_getnbr(av[i]);
    //         j++;
    //     }
    // }
}
