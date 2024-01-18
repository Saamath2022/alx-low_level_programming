#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strlen - find the length of a string
 * @s: the string for which length is to be calculated
 *
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	;
	return (size);
}

/**
 * *argstostr - description
 * @ac: arg count params
 * @av: arguments vector params
 * Return: String value
 */

char *argstostr(int ac, char **av)
{
	int i = 0, y = 0, j = 0, l = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; i < ac; i++, y++)
		y += _strlen(av[i]);

	s = malloc(sizeof(char) * y + 1);
	if (s == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, l++)
			s[l] = av[i][j];

		s[l] = '\n';
		l++;
	}
	s[l] = '\0';
	return (s);
}
