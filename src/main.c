/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main.c
*/

#include "my.h"

int interupt(int check)
{
	static int interupt;

	if (check == 1)
		interupt = 1;
	if (check == 2)
		if (interupt != 0)
			return (1);
	return (0);
}

void handler_two(int sig)
{
	static int i = 0;

	if (sig == SIGINT)
		interupt(1);
	if (sig == 12) {
		i_binary[i] = '0';
		i++;
	}
	if (sig == 10) {
		i_binary[i] = '1';
		i++;
	}
	if (i == 16) {
		i_binary[i] = '\0';
		i = 0;
	}
}

void handler(int sig, siginfo_t *siginfo, void *context)
{
	static int user2_pid;
	static int loop;

	(void)(context);
	if (loop == 0) {
		if (sig == 12) {
			my_printf("enemy connected\n\n");
			usleep(10000);
			kill(siginfo->si_pid, SIGUSR1);
			user2_pid = siginfo->si_pid;
			my_itoa(user2_pid);
			loop++;
			return;
		}
		if (sig == 10) {
			my_printf("successfully connected\n\n");
			loop++;
			return;
		}
	} else
		handler_two(sig);
}

static int initialize_struct(m *m, struct sigaction *s)
{
	i_binary = malloc(sizeof(char) * 18);
	if (i_binary == NULL)
		return (84);
	garbage_collector(i_binary, "add");
	m->pos_atk = malloc(sizeof(char) * 3);
	if (m->pos_atk == NULL)
		return (84);
	garbage_collector(m->pos_atk, "add");
	s->sa_sigaction = &handler;
	sigemptyset(&s->sa_mask);
	s->sa_flags = SA_SIGINFO;
	m->binary = malloc(sizeof(char) * 17);
	if (m->binary == NULL)
		return (84);
	garbage_collector(m->binary, "add");
	return (0);
}

int main(int argc, char **argv, char **envp)
{
	m m;
	int check = 0;
	struct sigaction s;

	if (initialize_struct(&m, &s))
		return (84);
	if (display_usage(argc, argv) == 1)
		return (0);
	if (argc != 2 && argc != 3)
		return (84);
	if (argc == 2)
		check = server(&m, &s, argv, envp);
	if (argc == 3)
		check = client(&m, &s, argv);
	return (check);
}
