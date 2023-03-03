/*
** EPITECH PROJECT, 2022
** proto
** File description:
** final stumper C pool
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include "utils.h"

#ifndef PROTO_H_
    #define PROTO_H_

char *my_convert_base(char *nbr, char *base_from, char *base_to);
int my_pow(int nb, int p);
char *open_file(char *file);
int init(char *file);
int my_intlen(int nb);

#endif
