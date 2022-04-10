/*
** EPITECH PROJECT, 2021
** my_getnbr.c
** File description:
** returns a number sent to the function as a string
*/

#include "../include/bsq.h"
#include <stdio.h>

int check_number(char c)
{
    int number;

    if (c >= '0' && c <= '9')
        number = 1;
    else
        number = 0;
    return (number);
}

int isolate_number(char const *str, int counter)
{
    int multiplier = 1;
    int number = 0;
    int counter2 = counter;

    while (check_number(str[counter2]) == 1) {
        multiplier = multiplier * 10;
        counter2 = counter2 + 1;
    }
    while (check_number(str[counter]) == 1) {
        multiplier = multiplier / 10;
        number = number + (str[counter] - 48) * multiplier;
        counter = counter + 1;
    }
    return (number);
}

int my_getnbr(char const *str)
{
    int counter = 0;
    int multiplier = 1;

    while (str[counter] != 0) {
        if (check_number(str[counter]) == 1) {
            return (isolate_number(str, counter));
        }
        counter = counter + 1;
    }
    return (0);
}
