/*
** EPITECH PROJECT, 2018
** display_map.c
** File description:
** display_map.c
*/

#include "my.h"

char **stock_map(char **map)
{
	int i;
	int j;
	char *line_1 = " |A B C D E F G H";
	char *line_2 = "-+---------------";

	map[0] = my_strcpy(map[0], line_1);
	map[1] = my_strcpy(map[1], line_2);
	for (i = 2, j = 1; i != 10; i++, j++)
		map[i][0] = j + '0';
	for (i = 2; i != 10; i++)
		map[i][1] = '|';
	map[i] = NULL;
	for (i = 2; i != 10; i++) {
		for (j = 2; j != 18; j += 2) {
			map[i][j] = '.';
			map[i][j+1] = ' ';
		}
		map[i][j-1] = '\0';
	}
	return (map);
}

char **malloc_map(char **map)
{
	int i;

	map = malloc(sizeof(char *) * 11);
	if (map == NULL)
		return (NULL);
	garbage_collector((char *)map, "add");
	for (i = 0; i < 10; i++) {
		map[i] = malloc(sizeof(char) * 19);
		if (map[i] == NULL)
			return (NULL);
		garbage_collector(map[i], "add");
	}
	return (map);
}

void display_map(char **map)
{
	for (int i = 0; map[i]; i++)
		my_printf("%s\n", map[i]);
}

char **get_enemy_map(char **map)
{
	map = malloc_map(map);
	if (map == NULL)
		return (NULL);
	map = stock_map(map);
	if (map == NULL)
		return (NULL);
	my_printf("\nenemy's positions:\n");
	display_map(map);
	my_printf("\n");
	return (map);
}

char **get_my_map(char **position, char **map)
{
	map = malloc_map(map);
	if (map == NULL)
		return (NULL);
	map = stock_map(map);
	map = fill_map(map, position);
	if (map == NULL)
		return (NULL);
	write(1, "my positions:\n", 14);
	display_map(map);
	return (map);
}
