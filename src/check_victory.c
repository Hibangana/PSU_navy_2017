/*
** EPITECH PROJECT, 2018
** check_victory.c
** File description:
** check_victory.c
*/

#include "my.h"

int check_victory_two(char **map, int row, int j)
{
	for (j = 2; j != 18; j += 2)
		if (check_if_between(map[row][j], '2', '5') == 0)
			return (1);
	return (0);
}

int check_victory(char **map)
{
	int row = 2;
	int j = 2;

	for (; row != 10; row++) {
		if (check_victory_two(map, row, j))
			return (0);
	}
	return (1);
}
