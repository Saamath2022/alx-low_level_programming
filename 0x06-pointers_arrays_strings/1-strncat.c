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
	int index = 0, dest_len = 0;

	while (dest[index++])
	dest_len++;

	for (indext = 0; src[index] && index < n; indext++)
		dest[dest_len++] = src[index];
	
	return (dest);
}
