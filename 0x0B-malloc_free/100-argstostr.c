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
	int ch = 0, i = 0, j = 0, k =0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		while (av[i][j])
		{
			ch++;
			j++;
		}
	}
	s  = malloc((sizeof(char) * ch) + ac + 1);

	i = 0;
	while (av[i])
	{
		while (av[i][j])
		{
			s[k] = av[i][j];
			k++;
			j++;
		}
		s[k] = '\n';

		j = 0;
		k++;
		i++;
	}
	k++;
	s[k] = '\0';
	return (s);
}
