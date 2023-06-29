#include "main.h"

/**
 * _strcat - Function that concatenates two strings.
 * @src: Source string pointer
 * @dest: Destination string pointer
 * @n: The number of bytes from src to be appended to dest.
 * Return: A pointer to te resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;
	while (dest[c])
		c++;

	for (i = 0; i < n && src[i] != '\0'; i++)
	dest[c + i] = src[i];

	dest[c + i] = '\0';

	return (dest);
}
