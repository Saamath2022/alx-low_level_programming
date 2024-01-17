#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code free memory
 * Return: Always 0.
 */

char *_strdup(char *str)
{
	size_t i, j;
	char *strdut;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	strdut = (char *)malloc(sizeof(char) * (i + 1));
	if (strdut == NULL)
	{
		return (NULL);
	}
	for (j = 0; j <= i; j++)
	{
		strdut[j] = strdut[j];
	}

	return (strdut);
}

