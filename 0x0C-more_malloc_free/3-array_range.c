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
	int len, j;
	int *p;


	if (min > max)
		return (NULL);
	len = max - min + 1;
	p = malloc(sizeof(int) * len);

	if (!p)
		return (NULL);
	for (j = 0; j < len; j++)
	{
		p[j] = min++;
	}
	return (p);
}
