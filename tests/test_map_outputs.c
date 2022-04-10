/*
** EPITECH PROJECT, 2021
** testing file output
** File description:
** testing output
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/bsq.h"

Test(test_output, map_box_empty, .init=cr_redirect_stdout)
{
    char *reference = read_map("tests/maps-intermediate/mouli_maps_solved/intermediate_map_one_empty_box");
    bsq("tests/maps-intermediate/mouli_maps/intermediate_map_one_empty_box");
    cr_assert_stdout_eq_str(reference);
}

Test(test_output, map_box_filled, .init=cr_redirect_stdout)
{
    char *reference = read_map("tests/maps-intermediate/mouli_maps_solved/intermediate_map_one_filled_box");
    bsq("tests/maps-intermediate/mouli_maps/intermediate_map_one_filled_box");
    cr_assert_stdout_eq_str(reference);
}

Test(test_output, map_34_137_25, .init=cr_redirect_stdout)
{
    char *reference = read_map("tests/maps-intermediate/mouli_maps_solved/intermediate_map_34_137_with_obstacles_25pc");
    bsq("tests/maps-intermediate/mouli_maps/intermediate_map_34_137_with_obstacles_25pc");
    cr_assert_stdout_eq_str(reference);
}

Test(test_output, map_34_137_50, .init=cr_redirect_stdout)
{
    char *reference = read_map("tests/maps-intermediate/mouli_maps_solved/intermediate_map_34_137_with_obstacles_50pc");
    bsq("tests/maps-intermediate/mouli_maps/intermediate_map_34_137_with_obstacles_50pc");
    cr_assert_stdout_eq_str(reference);
}

Test(test_output, map_100_100, .init=cr_redirect_stdout)
{
    char *reference = read_map("tests/maps-intermediate/mouli_maps_solved/intermediate_map_100_100");
    bsq("tests/maps-intermediate/mouli_maps/intermediate_map_100_100");
    cr_assert_stdout_eq_str(reference);
}

Test(test_output, map_1000_1000, .init=cr_redirect_stdout)
{
    char *reference = read_map("tests/maps-intermediate/mouli_maps_solved/intermediate_map_1000_1000");
    bsq("tests/maps-intermediate/mouli_maps/intermediate_map_1000_1000");
    cr_assert_stdout_eq_str(reference);
}

Test(test_output, map_1000_1000_2, .init=cr_redirect_stdout)
{
    char *reference = read_map("tests/maps-intermediate/mouli_maps_solved/intermediate_map_1000_1000_2");
    bsq("tests/maps-intermediate/mouli_maps/intermediate_map_1000_1000_2");
    cr_assert_stdout_eq_str(reference);
}

Test(test_output, map_2000_2000, .init=cr_redirect_stdout)
{
    char *reference = read_map("tests/maps-intermediate/mouli_maps_solved/intermediate_map_2000_2000");
    bsq("tests/maps-intermediate/mouli_maps/intermediate_map_2000_2000");
    cr_assert_stdout_eq_str(reference);
}

Test(test_output, map_10000_10000, .init=cr_redirect_stdout)
{
    char *reference = read_map("tests/maps-intermediate/mouli_maps_solved/intermediate_map_10000_10000");
    bsq("tests/maps-intermediate/mouli_maps/intermediate_map_10000_10000");
    cr_assert_stdout_eq_str(reference);
}

Test(test_output, map_5000_5000, .init=cr_redirect_stdout)
{
    char *reference = read_map("tests/maps-intermediate/mouli_maps_solved/intermediate_map_5000_5000");
    bsq("tests/maps-intermediate/mouli_maps/intermediate_map_5000_5000");
    cr_assert_stdout_eq_str(reference);
}

Test(test_output, map_500_500, .init=cr_redirect_stdout)
{
    char *reference = read_map("tests/maps-intermediate/mouli_maps_solved/intermediate_map_500_500");
    bsq("tests/maps-intermediate/mouli_maps/intermediate_map_500_500");
    cr_assert_stdout_eq_str(reference);
}

Test(test_output, map_500_500_2, .init=cr_redirect_stdout)
{
    char *reference = read_map("tests/maps-intermediate/mouli_maps_solved/intermediate_map_500_500_2");
    bsq("tests/maps-intermediate/mouli_maps/intermediate_map_500_500_2");
    cr_assert_stdout_eq_str(reference);
}

Test(test_output, map_97_21_empty, .init=cr_redirect_stdout)
{
    char *reference = read_map("tests/maps-intermediate/mouli_maps_solved/intermediate_map_97_21_empty");
    bsq("tests/maps-intermediate/mouli_maps/intermediate_map_97_21_empty");
    cr_assert_stdout_eq_str(reference);
}

Test(test_output, map_97_21_filled, .init=cr_redirect_stdout)
{
    char *reference = read_map("tests/maps-intermediate/mouli_maps_solved/intermediate_map_97_21_filled");
    bsq("tests/maps-intermediate/mouli_maps/intermediate_map_97_21_filled");
    cr_assert_stdout_eq_str(reference);
}

Test(test_output, map_97_21_with_obstacle_25pc, .init=cr_redirect_stdout)
{
    char *reference = read_map("tests/maps-intermediate/mouli_maps_solved/intermediate_map_97_21_with_obstacles_25pc");
    bsq("tests/maps-intermediate/mouli_maps/intermediate_map_97_21_with_obstacles_25pc");
    cr_assert_stdout_eq_str(reference);
}

Test(test_output, map_97_21_with_obstacle_50pc, .init=cr_redirect_stdout)
{
    char *reference = read_map("tests/maps-intermediate/mouli_maps_solved/intermediate_map_97_21_with_obstacles_50pc");
    bsq("tests/maps-intermediate/mouli_maps/intermediate_map_97_21_with_obstacles_50pc");
    cr_assert_stdout_eq_str(reference);
}

Test(test_output, map_97_21_with_obstacle_75pc, .init=cr_redirect_stdout)
{
    char *reference = read_map("tests/maps-intermediate/mouli_maps_solved/intermediate_map_97_21_with_obstacles_75pc");
    bsq("tests/maps-intermediate/mouli_maps/intermediate_map_97_21_with_obstacles_75pc");
    cr_assert_stdout_eq_str(reference);
}

Test(test_output, map_empty_corners, .init=cr_redirect_stdout)
{
    char *reference = read_map("tests/maps-intermediate/mouli_maps_solved/intermediate_map_empty_corners");
    bsq("tests/maps-intermediate/mouli_maps/intermediate_map_empty_corners");
    cr_assert_stdout_eq_str(reference);
}

Test(test_output, map_filled_corners, .init=cr_redirect_stdout)
{
    char *reference = read_map("tests/maps-intermediate/mouli_maps_solved/intermediate_map_filled_corners");
    bsq("tests/maps-intermediate/mouli_maps/intermediate_map_filled_corners");
    cr_assert_stdout_eq_str(reference);
}

Test(test_output, map_one_col_obs_25, .init=cr_redirect_stdout)
{
    char *reference = read_map("tests/maps-intermediate/mouli_maps_solved/intermediate_map_one_column_with_obstacles_25pc");
    bsq("tests/maps-intermediate/mouli_maps/intermediate_map_one_column_with_obstacles_25pc");
    cr_assert_stdout_eq_str(reference);
}

Test(test_output, map_one_cols_obs_50, .init=cr_redirect_stdout)
{
    char *reference = read_map("tests/maps-intermediate/mouli_maps_solved/intermediate_map_one_column_with_obstacles_50pc");
    bsq("tests/maps-intermediate/mouli_maps/intermediate_map_one_column_with_obstacles_50pc");
    cr_assert_stdout_eq_str(reference);
}

Test(test_output, map_one_cols_obs_75, .init=cr_redirect_stdout)
{
    char *reference = read_map("tests/maps-intermediate/mouli_maps_solved/intermediate_map_one_column_with_obstacles_75pc");
    bsq("tests/maps-intermediate/mouli_maps/intermediate_map_one_column_with_obstacles_75pc");
    cr_assert_stdout_eq_str(reference);
}

Test(test_output, map_one_line_obs_25, .init=cr_redirect_stdout)
{
    char *reference = read_map("tests/maps-intermediate/mouli_maps_solved/intermediate_map_one_line_with_obstacles_25pc");
    bsq("tests/maps-intermediate/mouli_maps/intermediate_map_one_line_with_obstacles_25pc");
    cr_assert_stdout_eq_str(reference);
}

Test(test_output, map_one_line_obs_50, .init=cr_redirect_stdout)
{
    char *reference = read_map("tests/maps-intermediate/mouli_maps_solved/intermediate_map_one_line_with_obstacles_50pc");
    bsq("tests/maps-intermediate/mouli_maps/intermediate_map_one_line_with_obstacles_50pc");
    cr_assert_stdout_eq_str(reference);
}

Test(test_output, map_one_line_obs_75, .init=cr_redirect_stdout)
{
    char *reference = read_map("tests/maps-intermediate/mouli_maps_solved/intermediate_map_one_line_with_obstacles_75pc");
    bsq("tests/maps-intermediate/mouli_maps/intermediate_map_one_line_with_obstacles_75pc");
    cr_assert_stdout_eq_str(reference);
}

Test(test_output, map_187_187_empty, .init=cr_redirect_stdout)
{
    char *reference = read_map("tests/maps-intermediate/mouli_maps_solved/intermediate_map_187_187_empty");
    bsq("tests/maps-intermediate/mouli_maps/intermediate_map_187_187_empty");
    cr_assert_stdout_eq_str(reference);
}

Test(test_output, map_187_187_filled, .init=cr_redirect_stdout)
{
    char *reference = read_map("tests/maps-intermediate/mouli_maps_solved/intermediate_map_187_187_filled");
    bsq("tests/maps-intermediate/mouli_maps/intermediate_map_187_187_filled");
    cr_assert_stdout_eq_str(reference);
}

Test(test_output, map_187_187_obs_25, .init=cr_redirect_stdout)
{
    char *reference = read_map("tests/maps-intermediate/mouli_maps_solved/intermediate_map_187_187_with_obstacles_25pc");
    bsq("tests/maps-intermediate/mouli_maps/intermediate_map_187_187_with_obstacles_25pc");
    cr_assert_stdout_eq_str(reference);
}

Test(test_output, map_187_187_obs_50, .init=cr_redirect_stdout)
{
    char *reference = read_map("tests/maps-intermediate/mouli_maps_solved/intermediate_map_187_187_with_obstacles_50pc");
    bsq("tests/maps-intermediate/mouli_maps/intermediate_map_187_187_with_obstacles_50pc");
    cr_assert_stdout_eq_str(reference);
}

Test(test_output, map_187_187_obs_75, .init=cr_redirect_stdout)
{
    char *reference = read_map("tests/maps-intermediate/mouli_maps_solved/intermediate_map_187_187_with_obstacles_75pc");
    bsq("tests/maps-intermediate/mouli_maps/intermediate_map_187_187_with_obstacles_75pc");
    cr_assert_stdout_eq_str(reference);
}