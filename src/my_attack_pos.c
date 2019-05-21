/*
** EPITECH PROJECT, 2018
** my_attack_pos.c
** File description:
** my_attack_pos.c
*/

#include "my.h"

int check_attacked_position(m *m, int usr)
{
	int row = 0;
	int j = 0;

	if (usr == 1) {
		for (row = 0, j = 0; m->usr1_enemy[0][j] != m->line[0]; j++);
		row = (m->line[1] - '0') + 1;
		if (m->usr1_enemy[row][j] != '.')
			return (84);
	}
	else {
		for (row = 0, j = 0; m->usr2_enemy[0][j] != m->line[0]; j++);
		row = (m->line[1] - '0') + 1;
		if (m->usr2_enemy[row][j] != '.')
			return (84);
	}
	return (0);
}

int my_attack_pos(m *m, int pid, int usr)
{
	my_printf("attack: ");
	m->line = get_next_line(0);
	if (m->line == NULL)
		return (1);
	garbage_collector(m->line, "add");
	while (check_line(m->line) || check_attacked_position(m, usr)) {
		usleep(50);
		my_printf("wrong position\n");
		my_printf("attack: ");
		m->line = get_next_line(0);
		if (m->line == NULL)
			return (1);
		garbage_collector(m->line, "add");
	}
	get_binary(m->line, m->binary);
	send_binary_signals(m->binary, pid);
	return (0);
}
