/*
** EPITECH PROJECT, 2018
** my_display_maps.c
** File description:
** my_display_maps.c
*/

#include "my.h"

void my_display_maps_two(m *m)
{
	my_printf("my positions:\n");
	display_map(m->usr2_map);
	my_putchar('\n');
	my_printf("enemy's positions:\n");
	display_map(m->usr2_enemy);
	my_putchar('\n');
}

void my_display_maps(m *m, int who)
{
	if (who == 1) {
		my_printf("my positions:\n");
		display_map(m->usr1_map);
		my_putchar('\n');
		my_printf("enemy's positions:\n");
		display_map(m->usr1_enemy);
		my_putchar('\n');
	}
	if (who == 2) {
		my_putchar('\n');
		my_printf("my positions:\n");
		display_map(m->usr2_map);
		my_putchar('\n');
		my_printf("enemy's positions:\n");
		display_map(m->usr2_enemy);
		my_putchar('\n');
	}
	if (who == 3)
		my_display_maps_two(m);
}
