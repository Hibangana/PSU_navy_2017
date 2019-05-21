/*
** EPITECH PROJECT, 2018
** my_free.c
** File description:
** my_free.c
*/

#include "my.h"

void my_free(char **position, char **map, char **enemy)
{
	for (int i = 0; i != 5; i++)
		free(position[i]);
	free(position);
	for (int i = 0; i != 11; i++) {
		free(map[i]);
		free(enemy[i]);
	}
	free(enemy);
	free(map);
}
