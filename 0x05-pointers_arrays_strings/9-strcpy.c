#include "main.h"

/**
 * _strcpy - copy a string
 * @dest: Destination value
 * @src: source value
 * Return: The pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{

	size_t i;

	for (i = 0; i < n && sr[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

