/*
** EPITECH PROJECT, 2017
** my_strcpy.c
** File description:
** my_strcpy.c
*/

char *my_strcpy(char *dest, char const *src)
{
	int i = 0;
	int j = 0;

	for (i = 0; src[i] != '\0'; i += 1, j += 1)
		dest[j] = src[i];
	dest[j] = '\0';
	return (dest);
}
