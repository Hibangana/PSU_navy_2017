/*
** EPITECH PROJECT, 2018
** my_itoa.c
** File description:
** my_itoa.c
*/

#include "my.h"

void my_itoa(int value)
{
	int nb = value;
	int i = 0;
	int k = 0;

	while (value > 0) {
		value = value / 10;
		i++;
	}
	i = i - 1;
	while (nb > 0) {
		i_binary[i] = nb % 10 + 48;
		nb = nb / 10;
		i--;
		k++;
	}
	i_binary[k] = '\0';
}
