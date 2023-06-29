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
	int lenght _of_string, z;

	length_of_string = 0;
	while (dest[length_of_string] != '\0')
	{
		length_of_string++;
	}
	for (z = 0; src[z] != '\0'; z++, length_of_string++)
	{
		dest[length_of_string] = src[j];
	}
	dest[length_of_string] = '\0';
	return (dest);
}
