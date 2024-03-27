#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: memory area
 * @src: source of memory to be copied
 * @n: length of src to be copied
 * Return: The pointer to dest.
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
