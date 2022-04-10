/*
** EPITECH PROJECT, 2021
** malloc_map.c
** File description:
** allocates memory for a map
*/

#include "../include/bsq.h"

int **malloc_map(int row_nb, int col_nb)
{
    int rows = 0;
    int cols = 0;
    int **map_array = malloc(sizeof(int *) * (row_nb));

    for (rows; rows < row_nb; rows++) {
        map_array[rows] = malloc(sizeof(int) * (col_nb));
    }
    for (rows = 0; rows < row_nb; rows++) {
        for (cols = 0; cols < col_nb; cols++) {
            map_array[rows][cols] = 0;
        }
    }
    return (map_array);
}

char **malloc_map_char(int row_nb, int col_nb)
{
    int rows = 0;
    int cols = 0;
    char **map_array = malloc(sizeof(char *) * (row_nb));

    for (rows; rows < row_nb; rows++) {
        map_array[rows] = malloc(sizeof(char) * (col_nb));
    }
    map_array[row_nb - 1] = NULL;
    return (map_array);
}