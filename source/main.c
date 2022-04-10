/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main function
*/
#include "../include/bsq.h"
#include <stdio.h>
#include <sys/time.h>

int main(int ac, char **av)
{
    char *filepath = av[1];

    if (check_arguments(ac, av) == 84)
        return (INVALID_ARGS);
    bsq(filepath);
    return (0);
}