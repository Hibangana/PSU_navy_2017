/*
** EPITECH PROJECT, 2018
** stock_error_handling.c
** File description:
** stock_error_handling.c
*/

#include "my.h"

char **stock_position(char **position, int fd)
{
	int i = 0;

	position[i] = get_next_line(fd);
	if (position[i] == NULL)
		return (NULL);
	garbage_collector(position[i], "add");
	while (position[i]) {
		if (i > 3)
			return (NULL);
		i++;
		position[i] = get_next_line(fd);
		garbage_collector(position[i], "add");
	}
	if (i != 4)
		return (NULL);
	return (position);
}

char **malloc_position(char **position)
{
	position = malloc(sizeof(char *) * 6);
	garbage_collector((char *)position, "add");
	if (position == NULL)
		return (NULL);
	return (position);
}

char **stock_error_handling(char *argv, char **position)
{
	int fd = open(argv, O_RDONLY);

	if (fd == -1)
		return (NULL);
	position = malloc_position(position);
	if (position == NULL)
		return (NULL);
	position = stock_position(position, fd);
	if (position == NULL)
		return (NULL);
	if (check_position(position))
		return (NULL);
	close(fd);
	return (position);
}
