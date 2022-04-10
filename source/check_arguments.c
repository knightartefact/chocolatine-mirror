/*
** EPITECH PROJECT, 2021
** check_arguments.c
** File description:
** checks validity of given arguments
*/
#include "../include/bsq.h"

int check_arguments(int ac, char **av)
{
    if (ac != 2) {
        return(INVALID_ARGS);
    }
    if (open_file(av[1]) == 84) {
        return(OPEN_FAILED);
    }
    if (check_nb_bytes_read(av[1]) == -1) {
        return (EMPTY_FILE);
    }
    return (0);
}
