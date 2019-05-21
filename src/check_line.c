/*
** EPITECH PROJECT, 2018
** check_line.c
** File description:
** check_line.c
*/

#include "my.h"

int check_line(char *line)
{
	if (my_strlen(line) != 2)
		return (84);
	if (check_if_between(line[0], 'A', 'H'))
		return (84);
	if (check_if_between(line[1], '1', '8'))
		return (84);
	return (0);
}
