/*
** EPITECH PROJECT, 2018
** get_map_two.c
** File description:
** get_map_two.c
*/

#include "my.h"

int get_map1(m *m)
{
	m->usr1_map = get_my_map(m->pos1, m->usr1_map);
	if (m->usr1_map == NULL)
		return (84);
	m->usr1_enemy = get_enemy_map(m->usr1_enemy);
	if (m->usr1_enemy == NULL)
		return (84);
	return (0);
}

int get_map2(m *m)
{
	m->usr2_map = get_my_map(m->pos2, m->usr2_map);
	if (m->usr2_map == NULL)
		return (84);
	m->usr2_enemy = get_enemy_map(m->usr2_enemy);
	if (m->usr2_enemy == NULL)
		return (84);
	return (0);
}
