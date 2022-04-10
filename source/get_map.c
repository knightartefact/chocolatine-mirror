/*
** EPITECH PROJECT, 2021
** get_map.c
** File description:
** returns an array containing the entire map
*/

#include "../include/bsq.h"
#include <stdio.h>

int skip_n(char cell, int *index)
{
    if (cell == '\n') {
        (*index)++;
        return (0);
    } else
        return (1);
}

int check_value(char cell)
{
    if (cell == '.') {
        return (1);
    } else if (cell == 'o') {
        return (0);
    }
}

int **get_map(char *buffer, map_data map, int offset, sub_coord *coords)
{
    int **map_array = malloc_map(map.rows, map.cols);
    int index = length_of_first_line(buffer) + 1;
    sub_coord current_coords;
    sub_coord new_coords;

    init_coords(&current_coords);
    for (int rows = offset; rows < map.rows; rows++) {
        for(int cols = offset; cols < map.cols; cols++) {
            skip_n(buffer[index], &index);
            map_array[rows][cols] = check_value(buffer[index]);
            map_array[rows][cols] = compute_matrix(map_array, rows, cols);
            new_coords.size = map_array[rows][cols];
            new_coords.col = cols;
            new_coords.row = rows;
            *coords = store_largest_sq(&current_coords, new_coords);
            index++;
        }
    }
    return (map_array);
}

char **copy_map_char(char *buffer, map_data map, int offset_x, int offset_y)
{
    char **map_array = malloc_map_char(map.rows + 1, map.cols + 2);
    int index = length_of_first_line(buffer) + 1;
    int rows = offset_y;
    int cols = offset_x;

    while (buffer[index - 1] != '\0' && rows != map.rows) {
        map_array[rows][cols] = buffer[index];
        if (buffer[index] == '\n') {
            map_array[rows][cols + 1] = '\0';
            rows++;
            cols = offset_x - 1;
        }
        index++;
        cols++;
    }
    return (map_array);
}