#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenate two strings with a maximum of n bytes from s2.
 * @s1: The frst string to be concatenated
 * @s2: The second string pointer to be concatenated
 * @n: The maximum number of bytes from s2 to concatenate.
 *
 * Return: A pointer that contaisn s1 followed by the frist n bytes of s2.
 *             Returns Null on memory allocation fialure
 */
char *string_ncocate(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i;
	char *result;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;

	while (s1[len1])
		len1++;

	while (s2[len2])
		len2++;

	if (n >= len2)
		n = len2
			;

	result = malloc(sizeof(char *(len1 + n + 1));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		result[i + len1] = s2[i];

	for (i = 0; i < n; i++)

	result[i + len1] = '\0';

	return (result);
}
