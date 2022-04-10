/*
** EPITECH PROJECT, 2021
** fs_open_file.c
** File description:
** opens a file and returns status
*/
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include "../include/bsq.h"

int open_file(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);

    if (fd == -1)
        return(OPEN_FAILED);
    else
        return (fd);
}
