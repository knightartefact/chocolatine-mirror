/*
** EPITECH PROJECT, 2021
** bsq.c
** File description:
** bsq finds the biggest square on a map full of obstacles
*/
#include "../include/bsq.h"
#include <stdio.h>
#include <sys/time.h>

int bsq(char const *file_path)
{
    map_data map_bsq;
    map_data matrix_map;
    sub_coord sq_coords;
    char *map_string = read_map(file_path);

    init_map(file_path, &map_bsq, 0, 0);
    init_map(file_path, &matrix_map, 1, 1);
    map_bsq.map_char = copy_map_char(map_string, map_bsq, 0, 0);
    matrix_map.map = get_map(map_string, matrix_map, 1, &sq_coords);
    map_bsq.map_char = replace_square(map_bsq.map_char, map_bsq, sq_coords);
    display_array_char(map_bsq.map_char, map_bsq);
    return (0);
}
