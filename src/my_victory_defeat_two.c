/*
** EPITECH PROJECT, 2018
** my_victory_defeat_two.c
** File description:
** my_victory_defeat_two.c
*/

#include "my.h"

int my_server_waiting_enemy_turn_two(m *m)
{
	my_printf("waiting for enemy's attack...\n");
	if (my_pause_client())
		return (1);
	m->pos_atk = get_pos_from_binary(i_binary, m->pos_atk);
	my_print_check_hit(m, m->user1);
	return (0);
}

int my_check_game_over_two(m *m)
{
	usleep(50);
	if (check_victory(m->usr2_map)) {
		send_binary_signals("1000000000000000", m->user1);
		my_display_maps(m, 3);
		my_printf("Enemy won\n");
		return (1);
	} else
		send_binary_signals("0000000000000001", m->user1);
	return (0);
}

void my_server_changing_map_two(m *m)
{
	my_pause_server();
	my_print_check_no_send(m, m->usr2_enemy);
	my_display_maps(m, 2);
	my_pause_client();
}
