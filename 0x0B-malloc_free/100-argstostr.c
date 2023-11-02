#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *argstostr - concatenates all the arguments of your programm
 * @ac: array to be concantenated
 * @av: argument string to be concatenated
 * Return: a pointer to a new string else NULL
 */

char *argstostr(int ac, char **av)
{
	int i, j, total_length = 0, k = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			total_length++;
		}
		total_length++;
	}
	s = malloc(sizeof(char) * (total_length + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		s[k] = ' ';
		k++;
	}
	s[k] = '\0';
	return (s);
}
