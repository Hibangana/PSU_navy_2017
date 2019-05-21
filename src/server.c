/*
** EPITECH PROJECT, 2018
** server.c
** File description:
** server.c
*/

#include "my.h"

int my_server_loop(m *m)
{
	while (1) {
		if (interupt(2) != 0)
			return (1);
		if (my_attack_pos(m, m->user2, 1))
			return (0);
		my_server_changing_map(m);
		if (check_signal_two()) {
			my_server_won_on_atk(m);
			return (0);
		}
		if (my_server_waiting_enemy_turn(m))
			return (1);
		if (my_check_game_over(m))
			return (1);
		my_pause_server();
		if (check_signal()) {
			my_printf("%s\n", "I won");
			return (0);
		}
	}
	return (0);
}

int start_server(m *m, struct sigaction *s)
{
	if (sigaction(SIGINT, s, NULL) != 0)
		return (84);
	if (sigaction(SIGUSR1, s, NULL) != 0)
		return (84);
	if (sigaction(SIGUSR2, s, NULL) != 0)
		return (84);
	if (get_map1(m))
		return (84);
	return (my_server_loop(m));
}

int server(m *m, struct sigaction *s, char **argv, char **envp)
{
	int check = 0;

	m->pos1 = stock_error_handling(argv[1], m->pos1);
	if (m->pos1 == NULL || envp[0] == NULL)
		return (84);
	my_printf("my_pid: %i\n", getpid());
	my_printf("waiting for enemy connection...\n\n");
	if (sigaction(SIGINT, s, NULL) != 0)
		return (84);
	if (sigaction(SIGUSR2, s, NULL) != 0)
		return (84);
	if (interupt(2) != 0)
		return (1);
	pause();
	m->user2 = my_atoi(i_binary);
	check = start_server(m, s);
	if (check == 84)
		return (84);
	garbage_collector(NULL, "free");
	return (check);
}
