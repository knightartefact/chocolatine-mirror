/*
** EPITECH PROJECT, 2021
** my_put_nbr.c
** File description:
** prints number given in parameters
*/

#include "../include/bsq.h"

int my_put_nbr(int nb)
{
    if (nb < 0) {
        nb *= -1;
        my_putchar('-');
    }
    if (nb < 10) {
        my_putchar(nb % 10 + '0');
    } else {
        my_put_nbr(nb / 10);
        my_putchar(nb % 10 + '0');
    }
    return (0);
}
