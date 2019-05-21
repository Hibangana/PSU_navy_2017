/*
** EPITECH PROJECT, 2018
** fill_map.c
** File description:
** fill_map.c
*/

#include "my.h"

char **letter_is_the_same(char **map, char **position, int i)
{
	int len = position[i][0] - '0';
	int j;
	int count = 0;
	int row;

	for (row = 0, j = 0; map[0][j] != position[i][2]; j++)
		;
	row = (position[i][3] - '0') + 1;
	if (position[i][3] < position[i][6]) {
		for (; count != len; row++, count++) {
			if (map[row][j] >= 49 && map[row][j] <= 56)
				return (NULL);
			map[row][j] = position[i][0];
		}
	}
	return (map);
}

char **number_is_the_same(char **map, char **position, int i)
{
	int len = position[i][0] - '0';
	int j;
	int count = 0;
	int row;

	for (row = 0, j = 0; map[0][j] != position[i][2]; j++)
		;
	row = (position[i][3] - '0') + 1;
	if (position[i][2] < position[i][5]) {
		for (; count != len; j += 2, count++) {
			if (map[row][j] >= 49 && map[row][j] <= 56)
				return (NULL);
			map[row][j] = position[i][0];
		}
	}
	return (map);
}

char **fill_map(char **map, char **position)
{
	int i;

	for (i = 0; i != 4; i++) {
		if (position[i][2] == position[i][5])
			map = letter_is_the_same(map, position, i);
		else if (position[i][3] == position[i][6])
			map = number_is_the_same(map, position, i);
		if (map == NULL)
			return (NULL);
	}
	return (map);
}
