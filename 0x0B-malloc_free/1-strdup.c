#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - A function to allocate a spece in memory
 * @str: Array parameter
 * Return: Always 0.
 */

char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *y;

	if (str == NULL)
	{
		return (NULL);
	}

	for (; str[size] != '\0'; size++)
	;

	y = malloc(size * sizeof(*str) + 1);

	if (y == 0)
		return (NULL);

	else
	{
		for (; i < size; i++)
			y[i] = str[i];
	}

	return (y);
}

