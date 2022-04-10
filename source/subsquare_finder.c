/*
** EPITECH PROJECT, 2021
** subsquare_finder.c
** File description:
** finds the biggest subsquare inside map
*/

#include "../include/bsq.h"

int lowest_value(int rows, int cols, int **map)
{
    int lowest_value = 0;
    int pos_up = map[rows - 1][cols];
    int pos_left = map[rows][cols - 1];
    int pos_corner = map[rows - 1][cols - 1];

    if (pos_up <= pos_left && pos_up <= pos_corner) {
        lowest_value = pos_up + 1;
    } else if (pos_left <= pos_corner) {
        lowest_value = pos_left + 1;
    } else
        lowest_value = pos_corner + 1;
    return (lowest_value);
}

sub_coord store_largest_sq(sub_coord *current_coords, sub_coord new_coords)
{
    if (new_coords.size > current_coords->size) {
        current_coords->col = new_coords.col;
        current_coords->row = new_coords.row;
        current_coords->size = new_coords.size;
    }
    return (*current_coords);
}

int compute_matrix(int **array, int rows, int cols)
{
    if (array[rows][cols] == 1)
        array[rows][cols] = lowest_value(rows, cols, array);
    return (array[rows][cols]);
}

char **replace_square(char **map_array, map_data data, sub_coord coords)
{
    int bot_rgt_x = coords.col - 1;
    int bot_rgt_y = coords.row - 1;
    int size = coords.size;

    if (size == 0) {
        return (map_array);
    }
    for (int rows = bot_rgt_y; rows > bot_rgt_y - size; rows--) {
        for (int cols = bot_rgt_x; cols != bot_rgt_x - size; cols--) {
            map_array[rows][cols] = 'x';
        }
    }
    return (map_array);
}

sub_coord subsquare_finder(map_data data, sub_coord *current, sub_coord *new)
{
    sub_coord current_coords;
    sub_coord new_coords;

    current_coords.size = 0;
    current_coords.col = 0;
    current_coords.row = 0;
    for (int rows = 1; rows < data.rows; rows++) {
        for (int cols = 1; cols < data.cols; cols++) {
            data.map[rows][cols] = compute_matrix(data.map, rows, cols);
            new_coords.size = compute_matrix(data.map, rows, cols);
            new_coords.col = cols;
            new_coords.row = rows;
            store_largest_sq(&current_coords, new_coords);
        }
    }
    return (current_coords);
}
