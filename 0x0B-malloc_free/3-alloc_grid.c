#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Allocates memory for a 2D array and initializes it to 0
 * @width: The width of the array
 * @height: The height of the array
 *
 * Return: Pointer to the allocated 2D array or NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **set, i, j;
	set = malloc(sizeof(*set) * height);

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	
	else
	{
		for (i = 0; i < height; i++)
		{
			set[i] = malloc(sizeof(*set) * width);
			if (set[i] == 0)
			{
				while (i--)
					free(set[i]);
				free(set);
				return (NULL);
			}
			for (j = 0; j < width; j++)
				set[i][j] = 0;
		}
	}
	return (set);
}
