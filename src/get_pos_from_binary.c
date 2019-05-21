/*
** EPITECH PROJECT, 2018
** get_pos_from_binary.c
** File description:
** get_pos_from_binary.c
*/

#include "my.h"

int my_pow(int x, int n)
{
	int i;
	int number = 1;

	for (i = 0; i < n; i++)
		number *= x;
	return (number);
}

char *get_pos_from_binary(char *str, char *line)
{
	int stock_one = 0;
	int stock_two = 0;
	int k = 0;

	for (int i = 7; i >= 0; i--) {
		if (str[i] == '1')
			stock_one = stock_one + my_pow(2, k);
		k++;
	}
	k = 0;
	for (int i = 15; i >= 8; i--) {
		if (str[i] == '1')
			stock_two = stock_two + my_pow(2, k);
		k++;
	}
	line[0] = stock_one;
	line[1] = stock_two;
	line[2] = '\0';
	return (line);
}
