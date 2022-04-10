/*
** EPITECH PROJECT, 2021
** test_get_map.c
** File description:
** gets map info and returns adequate value
*/
#include <criterion/criterion.h>
#include "../include/bsq.h"

Test(test_check_value, check_value_point)
{
    cr_assert_eq(check_value('.'), 1);
}

Test(test_check_value, check_value_o)
{
    cr_assert_eq(check_value('o'), 0);
}

Test(test_skip_n, skip_n_test)
{
    int index = 0;
    skip_n('\n', &index);
    cr_assert_eq(index, 1);
}
