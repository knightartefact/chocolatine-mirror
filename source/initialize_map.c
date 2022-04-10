/*
** EPITECH PROJECT, 2021
** initialize_map.c
** File description:
** funtion initializes map
*/
#include "../include/bsq.h"
#include <stdio.h>

void init_map(char const *filepath, map_data *map, int off_x, int off_y)
{
    map->cols = get_nb_cols(filepath) + off_x;
    map->rows = getnbr_first_line(filepath) + off_y;
    map->map = NULL;
    map->map_char = NULL;
}

void init_coords(sub_coord *coords)
{
    coords->size = 0;
    coords->col = 0;
    coords->row = 0;
}
