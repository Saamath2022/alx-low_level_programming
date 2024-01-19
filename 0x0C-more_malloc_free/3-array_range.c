#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: Integer minimum parameter
 * @max: integer maximum parameter
 * Return: Always int value
 */

int *array_range(int min, int max)
{
	int *p, j = 0;

	if (min > max)
		return (NULL);
	p = malloc((sizeof(int) * (max - min)) * sizeof(int));

	if (p == NULL)
		return (NULL);

	while (min <= max)
	{
		p[j] = min;
		j++;
		min++;
	}
	return (p);
}
