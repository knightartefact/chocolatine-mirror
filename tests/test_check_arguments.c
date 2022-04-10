/*
** EPITECH PROJECT, 2021
** check_arguments.c
** File description:
** checks validity of arguments
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/bsq.h"

Test(check_args_test, file_not_existant)
 {
     char *av[2] = {"./bsq", "not_existing_map"};
     cr_assert_eq(check_arguments(2, av), 84);
 }

 Test(check_args_test, no_file_arg)
 {
     char *av[1] = {"./bsq"};
     cr_assert_eq(check_arguments(1, av), 84);
 }

 Test(check_args_test, nothing_wrong)
 {
     char *av[2] = {"./bsq", "tests/maps-intermediate/mouli_maps/intermediate_map_34_137_empty"};
     cr_assert_eq(check_arguments(2, av), 0);
 }

 Test(get_nb_test, no_nb)
 {
     cr_assert_eq(my_getnbr("kfjbsdkgjb"), 0);
 }

 Test(putchar_test, noraml_test, .init=cr_redirect_stdout)
 {
     my_putchar('e');
     cr_assert_stdout_eq_str("e");
 }

Test(putstr_test, normal_test, .init=cr_redirect_stdout)
 {
     my_putstr("hello man");
     cr_assert_stdout_eq_str("hello man");
 }

Test(putnbr_test, normal_test, .init=cr_redirect_stdout)
 {
     my_put_nbr(7);
     cr_assert_stdout_eq_str("7");
 }

Test(putnbr_test, second_test, .init=cr_redirect_stdout)
 {
     my_put_nbr(-7);
     cr_assert_stdout_eq_str("-7");
 }

 Test(putnbr_test, third_test, .init=cr_redirect_stdout)
 {
     my_put_nbr(15);
     cr_assert_stdout_eq_str("15");
 }

  Test(check_nb_bytes_test, full_file_test)
 {
     int bytes = check_nb_bytes_read("tests/maps-intermediate/mouli_maps/custom_map");
     cr_assert_eq(bytes, 113);
 }

   Test(check_nb_bytes_test, empty_file_test)
 {
     int bytes = check_nb_bytes_read("tests/maps-intermediate/mouli_maps/testfile_dummy");
     cr_assert_eq(bytes, -1);
 }