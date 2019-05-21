/*
** EPITECH PROJECT, 2017
** my_strcmp.c
** File description:
** my_strcmp.c
*/

int my_strcmp(char const *s1, char const *s2)
{
	int i;
	int flag;

	for (i = 0, flag = 0; flag == 0; i++) {
		if (s1[i] > s2[i])
			flag = 1;
		else if (s1[i] < s2[i])
			flag = -1;
		if (s1[i] == '\0')
			return (flag);
		}
	return (flag);
}
