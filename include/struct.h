/*
** EPITECH PROJECT, 2017
** struct.h
** File description:
** struct.h
*/

#ifndef STRUCT_H_
#define STRUCT_H_

typedef struct garbage {
	void *ptr;
	struct garbage *next;
} garbage;

typedef struct garbage_l {
	struct garbage *head;
} garbage_l;

typedef struct map {
	int user2;
	int user1;
	char **usr1_map;
	char **usr1_enemy;
	char **usr2_map;
	char **usr2_enemy;
	char **pos1;
	char **pos2;
	char *line;
	char *binary;
	char *pos_atk;
} m;

#endif
