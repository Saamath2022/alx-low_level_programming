#include "main.h"
/**
 * _strcpy - function that copies a string
 * @dest: pointer to destination input buffer
 * @src: Pointer to source input
 * @n: Most number of bytes from @src
 * Return: A pointer in the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;
	/**
	 * iterate through src array
	 * where if there is no null byte
	 * among the first n bytes of source
	 * the string place in dest will not be
	 * null terminated
	 */

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}

