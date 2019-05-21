/*
** EPITECH PROJECT, 2018
** get_binary.c
** File description:
** get_binary.c
*/

#include "my.h"

char my_bit_filling(int nb)
{
	if (nb % 2 == 1)
		return ('1');
	else
		return ('0');
}

char *get_binary(char *str, char *mem)
{
	int nb = 0;
	int one = 7;
	int two = 15;

	for (int i = 0; str[i]; i++) {
		nb = str[i];
		while (one >= 0) {
			mem[one] = my_bit_filling(nb);
			nb = nb / 2;
			one--;
		}
		while (two >= 8 && i != 0) {
			mem[two] = my_bit_filling(nb);
			nb = nb / 2;
			two--;
		}
	}
	mem[16] = '\0';
	return (mem);
}
