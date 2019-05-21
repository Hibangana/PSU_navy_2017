/*
** EPITECH PROJECT, 2018
** garbage_collector.c
** File description:
** garbage_collector.c
*/

#include "my.h"

garbage_l *g_add(garbage_l *list, garbage *temp, char *str)
{
	if (!list) {
		list = malloc(sizeof(garbage_l));
		list->head = NULL;
	}
	temp = malloc(sizeof(garbage));
	temp->ptr = str;
	if (!list->head) {
		list->head = temp;
		temp->next = NULL;
	} else {
		temp->next = list->head;
		list->head = temp;
	}
	return (list);
}

void g_free(garbage_l *list, garbage *temp)
{
	while (list->head != NULL) {
		temp = list->head;
		list->head = list->head->next;
		free(temp->ptr);
		free(temp);
	}
	free(list);
}

void garbage_collector(char *str, const char *option)
{
	static garbage_l *list = NULL;
	garbage *temp = NULL;

	if (my_strcmp(option, "add") == 0)
		list = g_add(list, temp, str);
	else if (my_strcmp(option, "free") == 0)
		g_free(list, temp);
}
