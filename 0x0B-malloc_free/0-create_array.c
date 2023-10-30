#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - A function that creates an array of chars
 * @size: The size of the array
 * @c: Thhe char in the array
 * Return: The array filled
 */

char *create_array(unsigned int size, char)
{
	unsigned int i;
	char *s;

	if (s == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
