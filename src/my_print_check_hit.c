/*
** EPITECH PROJECT, 2018
** my_print_check_hit.c
** File description:
** my_print_check_hit.c
*/

#include "my.h"

void my_print_check_hit_two(m *m, int pid)
{
	my_printf("%s: ", m->pos_atk);
	if (check_hit(m->pos_atk, m->usr1_map)) {
		my_printf("%s\n\n", "hit");
		send_binary_signals("1111111111111111", pid);
	} else {
		my_printf("%s\n\n", "missed");
		send_binary_signals("0000000000000000", pid);
	}
}

void my_print_check_hit(m *m, int pid)
{
	my_printf("%s: ", m->pos_atk);
	if (check_hit(m->pos_atk, m->usr2_map)) {
		my_printf("%s\n\n", "hit");
		send_binary_signals("1111111111111111", pid);
	} else {
		my_printf("%s\n\n", "missed");
		send_binary_signals("0000000000000000", pid);
	}
}

void my_print_check_no_send(m *m, char **map)
{
	int row = 0;
	int j = 0;

	if (check_hit_signals(i_binary)) {
		for (row = 0, j = 0; map[0][j] != m->line[0]; j++)
			;
		row = (m->line[1] - '0') + 1;
		map[row][j] = 'x';
		my_printf("%s: hit\n", m->line);
	} else {
		for (row = 0, j = 0; map[0][j] != m->line[0]; j++);
		row = (m->line[1] - '0') + 1;
		map[row][j] = 'o';
		my_printf("%s: missed\n", m->line);
	}
}
