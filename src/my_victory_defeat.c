/*
** EPITECH PROJECT, 2018
** my_victory_defeat.c
** File description:
** my_victory_defeat.c
*/

#include "my.h"

void my_server_changing_map(m *m)
{
	my_pause_server();
	my_print_check_no_send(m, m->usr1_enemy);
	my_pause_client();
}

void my_server_won_on_atk(m *m)
{
	my_printf("\n");
	my_display_maps(m, 1);
	my_printf("%s\n", "I won");
}

int my_server_waiting_enemy_turn(m *m)
{
	my_printf("%s\n", "\nwaiting for enemy's attack...");
	if (my_pause_client())
		return (1);
	m->pos_atk = get_pos_from_binary(i_binary, m->pos_atk);
	my_print_check_hit_two(m, m->user2);
	my_display_maps(m, 1);
	return (0);
}

int my_check_game_over(m *m)
{
	usleep(50);
	if (check_victory(m->usr1_map)) {
		send_binary_signals("1000000000000000", m->user2);
		my_printf("Enemy won\n");
		return (1);
	} else
		send_binary_signals("0000000000000001", m->user2);
	return (0);
}
