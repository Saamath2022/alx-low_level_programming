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

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
	}
	return (dest);
}
