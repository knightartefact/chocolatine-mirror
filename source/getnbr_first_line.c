/*
** EPITECH PROJECT, 2021
** fs_print_first_line.c
** File description:
** displays the first line of map file
*/
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "../include/bsq.h"

int getnbr_first_line(char const *filepath)
{
    int fd = open_file(filepath);
    int size = return_file_size(filepath);
    char *buffer = malloc(sizeof(char) * (size + 1));
    int bytes_read = read(fd, buffer, size);
    int index = 0;
    int nb_first_line;

    while (buffer[index] != '\n') {
        index += 1;
    }
    buffer[index] = '\0';
    nb_first_line = my_getnbr(buffer);
    close(fd);
    free(buffer);
    return (nb_first_line);
}