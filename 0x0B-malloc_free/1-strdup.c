#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Duplicate a string.
 * @str: The input string to be duplicated.
 *
 * Return: A pointer to the duplicated string or NULL if str is NULL or if
 *         memory allocation fails.
 */
char *_strdup(char *str)
{
	int a = 0, i = 0;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	s = malloc(sizeof(char) * (i + 1));

	if (s == NULL)
		return (NULL);

	while (a < i)
	{
		s[a] = str[a];
		a++;
	}
	s[a] = '\0';
	return (s);
}

