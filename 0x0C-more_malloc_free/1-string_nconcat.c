#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: First string of array to be merged
 * @s2: Second string of array to be merge
 * @n: int
 * Return: The concatenated strings, or NULL on failure.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, s1_length, s2_length;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1_length = 0; s1[s1_length] != '\0'; s1_length++)
	;
	for (s2_length = 0; s2[s2_length] != '\0'; s2_length++)
	;
	str = malloc(s1_length + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		str[i] = s2[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
