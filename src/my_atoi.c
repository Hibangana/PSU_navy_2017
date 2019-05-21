/*
** EPITECH PROJECT, 2018
** my_atoi.c
** File description:
** my_atoi.c
*/

#include "my.h"

int my_atoi(char *str)
{
	int a = 0;
	int rest = 0;

	while (str[a]) {
		if (str[a] > '9' || str[a] < '0')
			return (-1);
		rest = rest * 10 + str[a] - '0';
		a++;
	}
	return (rest);
}
