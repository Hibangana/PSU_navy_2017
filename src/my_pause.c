/*
** EPITECH PROJECT, 2018
** my_pause.c
** File description:
** my_pause.c
*/

#include "my.h"

int my_pause_server(void)
{
	for (int i = 0; i < 15; i++) {
		if (interupt(2) != 0)
			return (1);
		pause();
	}
	return (0);
}

int my_pause_client(void)
{
	for (int i = 0; i < 16; i++) {
		if (interupt(2) != 0)
			return (1);
		pause();
	}
	return (0);
}
