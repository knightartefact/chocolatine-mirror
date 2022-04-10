/*
** EPITECH PROJECT, 2021
** test_file_size
** File description:
** tests the file size fucntion
*/

#include <criterion/criterion.h>
#include "../include/bsq.h"

Test(test_file_size, file_size_4799)
{
    cr_assert_eq(return_file_size("tests/maps-intermediate/mouli_maps/intermediate_map_34_137_empty"), 4799);
}