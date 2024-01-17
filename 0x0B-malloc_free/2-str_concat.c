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
	int y = 0, x = 0, k = 0, u = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[y] != '\0')
	{
		y++;
	}
	while (s2[x] != '\0')
	{
		x++;
	}

	k = y + x;
	s = malloc((sizeof(char) * (k + 1)));

	if (s == NULL)
		return (NULL);

	x = 0;
	while (k > u)
	{
		if (k <= y)
			s[k] = s1[x];
		if (k >= y)
		{
			s[k] = s2[y];
			y++;
		}
		k++;
	}
	s[k] = '\0';
	return (s);
}

