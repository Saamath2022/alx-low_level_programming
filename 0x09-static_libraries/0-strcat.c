#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strcat - fuinction to concatenates two strings
 * @dest: input dest value
 * @src: entered value
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int a;

	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';

	return (dest);
}


