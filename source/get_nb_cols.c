/*
** EPITECH PROJECT, 2021
** get_nb_cols.c
** File description:
** returns an int containing the number of cols
*/
#include "../include/bsq.h"

int length_of_first_line(char *buffer)
{
    int length = 0;

    while (buffer[length] != '\n') {
        length++;
    }
    return (length);
}

int get_nb_cols(char const *filepath)
{
    int fd = open_file(filepath);
    int size = return_file_size(filepath);
    char *buffer = malloc(sizeof(char) * (size + 1));
    int bytes_read = read(fd, buffer, size);
    int nb_lines = getnbr_first_line(filepath);
    int first_line_ln = length_of_first_line(buffer) + 1;
    int nb_cols;

    nb_cols = (size - nb_lines - first_line_ln) / nb_lines;
    close(fd);
    free(buffer);
    return (nb_cols);
}