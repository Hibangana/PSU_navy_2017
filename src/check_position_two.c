/*
** EPITECH PROJECT, 2018
** position_two
** File description:
** position_two
*/

#include "my.h"

int check_position_five(char **position)
{
	int i = 0;
	int two = 0;
	int three = 0;
	int four = 0;
	int five = 0;

	for (i = 0; i != 4; i++) {
		if (position[i][0] == '2')
			two++;
		if (position[i][0] == '3')
			three++;
		if (position[i][0] == '4')
			four++;
		if (position[i][0] == '5')
			five++;
	}
	if (two != 1 || three != 1 || four != 1 || five != 1)
		return (84);
	return (0);
}
