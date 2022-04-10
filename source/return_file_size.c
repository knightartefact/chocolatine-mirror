/*
** EPITECH PROJECT, 2021
** return_file_size.c
** File description:
** returns the file size as an integer
*/

#include "../include/bsq.h"
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>

int return_file_size(char const *filepath)
{
    struct stat sb;
    int file_size;

    stat(filepath, &sb);
    file_size = sb.st_size;
    return (file_size);
}
