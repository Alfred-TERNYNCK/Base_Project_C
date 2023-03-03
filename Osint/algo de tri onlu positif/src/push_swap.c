/*
** EPITECH PROJECT, 2022
** main for stumper
** File description:
** Final stumper C pool
*/

#include "my.h"
#include "proto.h"
#include "utils.h"

int *radix_sort(int *array, int size)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int max = 0;
    int *count = malloc(sizeof(int) * 1000);
    int *output = malloc(sizeof(int) * size);

    for (i = 0; i < size; i++) {
        if (array[i] > max)
            max = array[i];
    }
    while (max > 0) {
        for (i = 0; i < 10; i++)
            count[i] = 0;
        for (i = 0; i < size; i++)
            count[(array[i] / (int)my_pow(10, j)) % 10]++;
        for (i = 1; i < 10; i++)
            count[i] += count[i - 1];
        for (i = size - 1; i >= 0; i--) {
            output[count[(array[i] / (int)my_pow(10, j)) % 10] - 1] = array[i];
            count[(array[i] / (int)my_pow(10, j)) % 10]--;
        }
        for (i = 0; i < size; i++)
            array[i] = output[i];
        j++;
        max = max / 10;
    }
    return array;
}

char *convert_binary(char *buffer)
{
    int t = 0;

    int i = 0;
    int j = 0;
    int k = 0;
    int len = my_strlen(buffer);
    char *result = malloc(sizeof(char) * len * 8 + 1);

    while (buffer[i] != '\0') {
        printf("%i\n" , t);
        t++;
        result = my_strcat(result, my_convert_base(&buffer[i], "0123456789", "01"));
        i++;
    }
    return result;
}

int *convert_int(char *buffer)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int len = my_strlen(buffer);
    int *result = malloc(sizeof(int) * len);

    while (buffer[i] != '\0') {
        result[j] = my_getnbr(&buffer[i]);
        i = i + my_intlen(result[j]) + 1;
        j++;
    }
    return result;
}

int init(char *file)
{
    char *buffer = open_file(file);
    if (buffer == NULL || buffer[0] == '\0')
        return 84;
    int size = my_strlen(buffer);
    int *array = malloc(sizeof(int) * size);
    array = convert_int(buffer);
    array = radix_sort(array, size);
    for (int i = 0; i < size; i++)
        printf("%i\n", array[i]);
    return 0;
}
