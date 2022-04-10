##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## makes bsq project
##

SRC	=	source/my_getnbr.c	\
		source/my_put_nbr.c	\
		source/my_putchar.c	\
		source/my_putstr.c	\
		source/getnbr_first_line.c	\
		source/open_file.c	\
		source/get_nb_cols.c	\
		source/check_arguments.c	\
		source/return_file_size.c	\
		source/get_map.c	\
		source/display_array.c	\
		source/read_map.c	\
		source/initialize_map.c	\
		source/subsquare_finder.c	\
		source/malloc_map.c	\
		source/my_strlen.c	\
		source/bsq.c

MAIN	=	source/main.c	\

MAIN_TIME = source/main_time_testing.c	\

TEST_SRC	=	tests/test_get_nb_cols.c	\
				tests/test_get_map.c	\
				tests/test_map_outputs.c	\
				tests/test_check_arguments.c	\
				tests/test_file_size.c

ERR_FLGS	=	-Werror -Wall -Wextra

TEST_FLGS	=	-lcriterion --coverage

OBJ	=	$(SRC:.c=.o)

NAME	=	bsq

all: $(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(MAIN) $(OBJ) $(ERR_FLGS) -I include -g

clean:
	rm -f $(OBJ) unit_tests
	rm -f *.gcda *.gcno vgcore.*

fclean: clean
	rm -f $(NAME)

tests_run:	clean $(OBJ)
	@echo "Tests ran successfuly"

time_testing: $(OBJ)
	gcc -o $(NAME) $(MAIN_TIME) $(OBJ) $(ERR_FLGS) -I include -g

re: fclean all
