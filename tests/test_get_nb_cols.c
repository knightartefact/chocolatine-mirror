/*
** EPITECH PROJECT, 2021
** test_get_nb_cols.c
** File description:
** tests get_nb_cols function
*/

#include <criterion/criterion.h>
#include "../include/bsq.h"

Test(test_nb_lines, hundred_lines)
{
    int fd = open_file("tests/maps-intermediate/mouli_maps/intermediate_map_100_100");
    int lines = getnbr_first_line("tests/maps-intermediate/mouli_maps/intermediate_map_100_100");
    cr_assert_eq(lines, 100);
}

Test(test_nb_lines, lines_137)
{
    int fd = open_file("tests/maps-intermediate/mouli_maps/intermediate_map_34_137_empty");
    int lines = getnbr_first_line("tests/maps-intermediate/mouli_maps/intermediate_map_34_137_empty");
    cr_assert_eq(lines, 137);
}

Test(test_nb_cols, hundred_cols)
{
    int fd = open_file("tests/maps-intermediate/mouli_maps/intermediate_map_100_100");
    int nb_cols = get_nb_cols("tests/maps-intermediate/mouli_maps/intermediate_map_100_100");
    cr_assert_eq(nb_cols, 100);
}

Test(test_nb_cols, cols_34)
{
    int fd = open_file("tests/maps-intermediate/mouli_maps/intermediate_map_34_137_empty");
    int nb_cols = get_nb_cols("tests/maps-intermediate/mouli_maps/intermediate_map_34_137_empty");
    cr_assert_eq(nb_cols, 34);
}

Test(test_nb_lines, lines_100)
{
    int fd = open_file("tests/maps-intermediate/mouli_maps/intermediate_map_one_column_with_obstacles_25pc");
    int lines = getnbr_first_line("tests/maps-intermediate/mouli_maps/intermediate_map_one_column_with_obstacles_25pc");
    cr_assert_eq(lines, 100);
}

Test(test_nb_cols, one_col)
{
    int fd = open_file("tests/maps-intermediate/mouli_maps/intermediate_map_one_column_with_obstacles_25pc");
    int nb_cols = get_nb_cols("tests/maps-intermediate/mouli_maps/intermediate_map_one_column_with_obstacles_25pc");
    cr_assert_eq(nb_cols, 1);
}

Test(test_nb_lines, one_one_lines)
{
    int fd = open_file("tests/maps-intermediate/mouli_maps/intermediate_map_one_filled_box");
    int lines = getnbr_first_line("tests/maps-intermediate/mouli_maps/intermediate_map_one_filled_box");
    cr_assert_eq(lines, 1);
}

Test(test_nb_cols, one_one_cols)
{
    int fd = open_file("tests/maps-intermediate/mouli_maps/intermediate_map_one_filled_box");
    int nb_cols = get_nb_cols("tests/maps-intermediate/mouli_maps/intermediate_map_one_filled_box");
    cr_assert_eq(nb_cols, 1);
}

