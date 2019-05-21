##
## EPITECH PROJECT, 2017
## Makefile
## File description:
##
##

SRC	=	src/main.c	\
		src/check_position.c	\
		src/get_next_line.c	\
		src/get_next_line_two.c	\
		src/stock_error_handling.c	\
		src/get_map.c	\
		src/fill_map.c	\
		src/display_usage.c	\
		src/my_free.c	\
		src/get_binary.c	\
		src/send_binary_signals.c	\
		src/get_pos_from_binary.c	\
		src/check_line.c	\
		src/my_attack_pos.c	\
		src/client.c	\
		src/server.c	\
		src/my_atoi.c	\
		src/my_itoa.c	\
		src/check_hit.c	\
		src/my_pause.c	\
		src/my_print_check_hit.c	\
		src/my_display_maps.c	\
		src/check_victory.c	\
		src/check_signal.c	\
		src/get_map_two.c	\
		src/my_victory_defeat.c	\
		src/my_victory_defeat_two.c	\
		src/check_position_two.c	\
		src/garbage_collector.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	navy

CFLAGS	= -I./include -g3

all:	$(NAME)

$(NAME):	$(OBJ)
		$(MAKE) -C lib/my/
		gcc -o $(NAME) $(SRC) -Llib/my/ -lmy $(CFLAGS)

tests_run:
		make -C tests

tests_clean:
		cd tests/ && $(MAKE) fclean
		rm *gcno
		rm *gcda
		rm *o
		rm unit_test
clean:
	rm -f $(OBJ)
	cd lib/my/ && $(MAKE) clean

fclean: clean
	rm -f $(NAME)
	cd lib/my/ && $(MAKE) fclean

re: fclean all

.PHONY : all re fclean clean
