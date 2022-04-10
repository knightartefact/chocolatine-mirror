/*
** EPITECH PROJECT, 2021
** bonus.h
** File description:
** header file containing usefull functions
*/

#ifndef BSQ_H_
    #define BSQ_H_
    #define OPEN_FAILED 84
    #define INVALID_ARGS 84
    #define EMPTY_FILE 84
    #include <stdlib.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <unistd.h>
    #include <fcntl.h>

typedef struct map_data
{
    int rows;
    int cols;
    int **map;
    char **map_char;
} map_data;

typedef struct sub_coord
{
    int row;
    int col;
    int size;
} sub_coord;

void my_putchar(char c);
void my_putstr(char const *str);
int my_put_nbr(int nb);
int open_file(char const *filepath);
int my_strlen(char const *str);
void understand_return_read(int fd , char *buffer , int size);
void fs_cat_500_bytes(char const *filepath);
void fs_cat_x_bytes(char const *filepath, int x);
void fs_print_first_line(char const *filepath);
int my_getnbr(char const *str);
int getnbr_first_line(char const *filepath);
int get_nb_cols(char const *filepath);
void array_1d_print_chars(char const *arr);
void array_1d_print_ints(int const *arr, int size);
int array_1d_sum(int const *arr, int size);
int array_2d_sum(int **arr, int nb_rows, int nb_cols);
int array_2d_how_many(int **arr, int nb_rows, int nb_cols, int number);
int bsq(char const *file_path);
int check_arguments(int ac, char **av);
int length_of_first_line(char *buffer);
int return_file_size(char const *filepath);
int **get_map(char *buffer, map_data map, int offset, sub_coord *coords);
int check_value(char cell);
int **malloc_map(int row_nb, int col_nb);
int skip_n(char cell, int *index);
void display_array(int **map_array, map_data map);
char *read_map(char const *filepath);
void init_map(char const *filepath, map_data *map, int off_x, int off_y);
sub_coord subsquare_finder(map_data data, sub_coord *current, sub_coord *new);
int lowest_value(int rows, int cols, int **map);
char **copy_map_char(char *buffer, map_data map, int offset_x, int offset_y);
void display_array_char(char **map_array, map_data map);
char **malloc_map_char(int row_nb, int col_nb);
char **replace_square(char **map_array, map_data data, sub_coord coords);
int check_nb_bytes_read(char const *filepath);
void init_coords(sub_coord *coords);
int compute_matrix(int **array, int rows, int cols);
sub_coord store_largest_sq(sub_coord *current_coords, sub_coord new_coords);
void write_array_char(char **map_array, map_data map, int fd);

#endif /* !BSQ_H_ */
