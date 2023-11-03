#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - A function that creats an array of integer
 * @min: ...
 * @max: The maximum range of integer
 * Return: Always 0.
 */

int *array_range(int min, int max)
{
	int  *a, j = 0;

	if (min > max)
		return (NULL);

	a = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (a == NULL)
		return (NULL);
	while (min <= max)
	{
		a[j] = min;
		j++;
		min++;
	}
	return (a);
}

