#include "main.h"
#include <stdlib.h>

/**
 * _strlen - Calculate the length of concatenated srings
 * @s: string to concatenate
 * Return: value
 */

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	;
	return (size);
}

/**
 * str_concat - concatenates two strings
 * @s1: First string of array to be merged
 * @s2: Second string of array to be merge
 * Return: The concatenated strings, or NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	int size1, size2, i;
	char *q;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size1 = _strlen(s1);
	size2 = _strlen(s2);
	q = malloc((size1 + size2) *sizeof(char) + 1);
	if (q == 0)
		return (0);
	for (i = 0; i <= size1 + size2; i++)
	{
		if (i < size1)
			q[i] = s1[i];
		else
			q[i] = s2[i - size1];
	}
	q[i] = '\0';
	return (q);
}

