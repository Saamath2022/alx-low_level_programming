#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: First string of array to be merged
 * @s2: Second string of array to be merge
 * Return: The concatenated strings, or NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size_t len_s1 = 0;
	size_t len_s2 = 0;

	while (s1[len_s1] != '\0')
	{
		lent_s1++;
	}
	while (s2[len_s2] != '\0')
	{
		len_s2++;
	}

	char *result = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char))

	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len_s1; ++)
	{
		result[i];
	}

	for (i = 0; i < lens_s2; i++)
	{
		result[len_s1 + i] = s2[i];
	}
	return (result);
}

