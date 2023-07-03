#include "main.h"

/**
 * _memcpy - Entry point
 * @dest: input
 * @src: input
 * @n: input
 * return: always 0 (success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	int r = n;

	for (; i < r; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);

}
