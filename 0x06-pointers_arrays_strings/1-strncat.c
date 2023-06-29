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
	int c, c2;

	c = 0;
	while (dest[c])
		c++;
	for (c2 = 0; src[c2]; c2++)
	dest[c++] = src[c2];

	return (dest);
}
