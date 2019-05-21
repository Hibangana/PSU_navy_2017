/*
** EPITECH PROJECT, 2018
** display_usage.c
** File description:
** display_usage.c
*/

#include "my.h"

void disp_usage(void)
{
	my_printf("USAGE\n     ./navy [first_player_pid] navy positions\n");
	my_printf("DESCRIPTION\n     first_player_pid: only for the 2nd p");
	my_printf("layer.  pid of the first player.\n     navy_positions:");
	my_printf(" file representing the positions of the ships.\n");
}

int display_usage(int ac, char **av)
{
	if (COND_3 && COND_3_1) {
		disp_usage();
		return (1);
	}
	return (0);
}
