/*
** EPITECH PROJECT, 2021
** fs_cat_x_bytes.c
** File description:
** displays the first x bytes of map file
*/

#include "../include/bsq.h"

char *read_map(char const *filepath)
{
    int size = return_file_size(filepath);
    int fd = open(filepath, O_RDONLY);
    char *buffer = malloc(sizeof(char) * (size + 1));

    read(fd, buffer, size);
    close(fd);
    return (buffer);
}

int check_nb_bytes_read(char const *filepath)
{
    int size = return_file_size(filepath);
    int fd = open(filepath, O_RDONLY);
    char *buffer = malloc(sizeof(char) * (size + 1));
    int bytes_read = read(fd, buffer, size);

    if (bytes_read > 0) {
        return (bytes_read);
        close(fd);
    } else {
        return (-1);
        close(fd);
    }
}