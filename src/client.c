/*
** EPITECH PROJECT, 2018
** client.c
** File description:
** client.c
*/

#include "my.h"

int my_client_loop(m *m)
{
	while (1) {
		if (interupt(2) != 0 || my_server_waiting_enemy_turn_two(m))
			return (0);
		if (my_check_game_over_two(m))
			return (1);
		if (my_attack_pos(m, m->user1, 2))
			return (0);
		my_server_changing_map_two(m);
		if (check_signal()) {
			my_printf("%s\n", "I won");
			return (0);
		}
		if (check_victory(m->usr2_map)) {
			send_binary_signals("1000000000000000", m->user1);
			my_printf("Enemy won\n");
			return (1);
		} else
			send_binary_signals("0000000000000001", m->user1);
	}
	return (0);
}

int start_client(m *m, struct sigaction *s)
{
	if (sigaction(SIGINT, s, NULL) != 0)
		return (84);
	if (sigaction(SIGUSR1, s, NULL) != 0)
		return (84);
	if (sigaction(SIGUSR2, s, NULL) != 0)
		return (84);
	if (interupt(2) != 0)
		return (1);
	pause();
	if (get_map2(m))
		return (84);
	return (my_client_loop(m));
}

int client(m *m, struct sigaction *s, char **argv)
{
	int check = 0;

	if ((m->user1 = my_atoi(argv[1])) <= 0)
		return (84);
	m->pos2 = stock_error_handling(argv[2], m->pos2);
	if (m->pos2 == NULL)
		return (84);
	if (sigaction(SIGUSR1, s, NULL) != 0)
		return (84);
	my_printf("my_pid: %i\n", getpid());
	usleep(10000);
	if ((kill(m->user1, SIGUSR2)) < 0)
		return (84);
	check = start_client(m, s);
	if (check == 84)
		return (84);
	garbage_collector(NULL, "free");
	return (check);
}
