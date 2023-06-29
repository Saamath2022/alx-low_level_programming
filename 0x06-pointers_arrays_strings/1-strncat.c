#include "main.h"

/**
 * _strcat - Concatenates two strings
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
	j = 0;
	while (src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[1] = '\0'

	return (dest);
}
