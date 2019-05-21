/*
** EPITECH PROJECT, 2018
** check_signal.c
** File description:
** check_signal.c
*/

#include "my.h"

int check_signal_two(void)
{
	if (i_binary[0] == '1' && i_binary[1] != '1' && i_binary[2] != '1')
		return (1);
	return (0);
}

int check_signal_three(void)
{
	for (int i = 1; i < 16; i++) {
		if (i_binary[i] != '0')
			return (0);
	}
	return (1);
}

int check_signal(void)
{
	if (i_binary == NULL)
		return (0);
	if (i_binary[0] == '1') {
		if (check_signal_three() == 0)
			return (0);
		return (1);
	}
	return (0);
}
