#include "main.h"

/**
 * _strcat - concatenates two sring
 * @dest: input value
 * @src: input
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != = '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
