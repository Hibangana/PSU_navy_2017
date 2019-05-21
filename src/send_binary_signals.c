/*
** EPITECH PROJECT, 2018
** send_binary_signals.c
** File description:
** send_binary_signals.c
*/

#include "my.h"

void send_binary_signals(char *str, int pid)
{
	int i = 0;

	if (str[16] != '\0')
		str[16] = '\0';
	while (str[i]) {
		if (str[i] == '1') {
			kill(pid, SIGUSR1);
			usleep(10000);
		} else {
			kill(pid, SIGUSR2);
			usleep(10000);
		}
		i++;
	}
}
