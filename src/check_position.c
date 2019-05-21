/*
** EPITECH PROJECT, 2018
** check_position.c
** File description:
** check_position.c
*/

#include "my.h"

int check_if_between(int char_to_check, int a, int b)
{
	if (char_to_check < a || char_to_check > b)
		return (1);
	return (0);
}

int check_position_three(char **position)
{
	int stock = 0;

	for (int i = 0; i != 4; i++)
		if (COND_2 && COND_2_1)
			return (84);
	for (int i = 0; i != 4; i++) {
		if (position[i][2] == position[i][5]) {
			stock = position[i][6] - position[i][3] + 1;
			if (COND_4 || COND_4_1)
				return (84);
		}
		if (position[i][3] == position[i][6]) {
			stock = position[i][5] - position[i][2] + 1;
			if (COND_5 || COND_5_1)
				return (84);
		}
	}
	if (check_position_five(position))
		return (84);
	return (0);
}

int check_position_two(char **position)
{
	int i;

	for (i = 0; i != 4; i++)
		if (check_if_between(position[i][3], '1', '8'))
			return (84);
	for (i = 0; i != 4; i++)
		if (position[i][4] != ':')
			return (84);
	for (i = 0; i != 4; i++)
		if (check_if_between(position[i][5], 'A', 'H'))
			return (84);
	for (i = 0; i != 4; i++)
		if (check_if_between(position[i][6], '1', '8'))
			return (84);
	return (0);
}

int check_position_four(char **position, int i)
{
	for (int j = 0; position[i][j] != '\0'; j++)
		if (j > 6)
			return (1);
	return (0);
}

int check_position(char **position)
{
	int i;

	for (i = 0; i != 4; i++) {
		if (check_position_four(position, i))
			return (84);
	}
	for (i = 0; i != 4; i++)
		if (check_if_between(position[i][0], '2', '5'))
			return (84);
	for (i = 0; i != 4; i++)
		if (position[i][1] != ':')
			return (84);
	for (i = 0; i != 4; i++)
		if (check_if_between(position[i][2], 'A', 'H'))
			return (84);
	if (check_position_two(position) || check_position_three(position))
		return (84);
	return (0);
}
