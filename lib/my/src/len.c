/*
** EPITECH PROJECT, 2017
** len.c
** File description:
** len.c
*/

int len(char const *str)
{
	int nb;

	nb = 0;
	while (str[nb] != '\0')
		nb = nb + 1;
	return (nb);
}
