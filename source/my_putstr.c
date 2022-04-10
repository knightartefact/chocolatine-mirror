/*
** EPITECH PROJECT, 2021
** my_putstr.c
** File description:
** displays one by one the characters of a string
*/
void my_putchar(char c);

int my_putstr(char const *str)
{
    while (*str != 0) {
        my_putchar(*str);
        str = str + 1;
    }
    return (0);
}
