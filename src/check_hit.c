/*
** EPITECH PROJECT, 2018
** check_hit.c
** File description:
** check_hit.c
*/

#include "my.h"

int check_hit_signals(char *str)
{
	int i = 0;

	while (i < 16) {
		if (str[i] != '1')
			return (0);
		i++;
	}
	return (1);
}

int check_hit(char *line, char **map)
{
	int j = 0;
	int row = 0;

	for (row = 0, j = 0; map[0][j] != line[0]; j++)
		;
	row = (line[1] - '0') + 1;
	if (check_if_between(map[row][j], '2', '5') == 0 &&
	map[row][j] != 'o') {
		map[row][j] = 'x';
		return (1);
	} else {
		map[row][j] = 'o';
		return (0);
	}
	return (0);
}
