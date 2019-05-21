##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

SRC	=	src/my_compute_power_rec.c	\
		src/my_showstr.c	\
		src/my_strlowcase.c	\
		src/my_compute_square_root.c	\
		src/my_sort_int_array.c	\
		src/my_strncat.c	\
		src/my_find_prime_sup.c	\
		src/my_strcapitalize.c	\
		src/my_strncmp.c	\
		src/my_getnbr.c	\
		src/my_strcat.c	\
		src/my_strncpy.c	\
		src/my_strcmp.c	\
		src/my_strstr.c	\
		src/my_isneg.c	\
		src/my_strcpy.c	\
		src/my_str_to_word_array.c	\
		src/my_is_prime.c	\
		src/my_str_isalpha.c	\
		src/my_strupcase.c	\
		src/my_putchar.c	\
		src/my_str_islower.c	\
		src/my_swap.c	\
		src/my_put_nbr.c	\
		src/my_str_isnum.c	\
		src/my_putstr.c	\
		src/my_str_isprintable.c	\
		src/my_revstr.c	\
		src/my_str_isupper.c	\
		src/my_showmem.c	\
		src/my_strlen.c	\
		src/my_strdup.c	\
		src/len.c		\
		src/disp_stdarg.c	\
		src/sum_stdarg.c	\
		printf/my_printf.c	\
		printf/printf_int.c	\
		printf/printf_char.c	\
		printf/printf_str.c	\
		printf/array_pointer_function.c	\
		printf/stock.c		\
		printf/convert.c	\
		printf/printf_octal.c	\
		printf/printf_hexa.c	\
		printf/printf_unsint.c	\
		printf/printf_ptr.c	\
		printf/printf_binary.c	\
		printf/printf_uppers.c	\
		printf/parser.c		\
		printf/parser2.c	\
		printf/printf_upperc.c	\
		printf/format_diese.c	\
		printf/format_blank.c	\
		printf/format_plus.c	\

OBJ	=	$(SRC:.c=.o)

NAMELIB	=	libmy.a

NAMEH	=	my.h

H	=	../../include/

all:	$(NAMELIB)

$(NAMELIB):	$(OBJ)
	ar rc $(NAMELIB) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAMELIB)

re:	fclean all

.PHONY: all clean re
