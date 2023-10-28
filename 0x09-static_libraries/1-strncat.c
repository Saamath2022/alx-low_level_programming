#include "main.h"

/**
 * _strncat - Concatenates two strings, with a limit
 * of 'n' bytes from src
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: Most number of byte from &src
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[1] = '\0';

	return (dest);
}
