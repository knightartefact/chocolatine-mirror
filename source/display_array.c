/*
** EPITECH PROJECT, 2021
** display_array.c
** File description:
** displays an array of integers in terminal
*/

#include "../include/bsq.h"
#include <stdio.h>

void display_array(int **map_array, map_data map)
{
    for (int rows = 0; rows < map.rows; rows++) {
        for (int cols = 0; cols < map.cols; cols++) {
            my_putchar(map_array[rows][cols] + '0');
            my_putchar(' ');
        }
        my_putchar('\n');
    }
}

void display_array_char(char **map_array, map_data map)
{
        for (int rows = 0; rows < map.rows; rows++) {
            write(1, map_array[rows], my_strlen(map_array[rows]));
    }
}

void write_array_char(char **map_array, map_data map, int fd)
{
        for (int rows = 0; rows < map.rows; rows++) {
            write(fd, map_array[rows], my_strlen(map_array[rows]));
    }
}
