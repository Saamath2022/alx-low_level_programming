#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Allocate a 2D array of integers and initialize to 0.
 * @width: The widht of the grid.
 * @height: The height of the grid.
 *
 * Return: A pointer to the allocated grid or Null on failure.
 */

int **alloc_grid(int width, int height)
{
	int i, j, k, l;
	int **b;

	if (width <= 0 || height <= 0)
		return (NULL);

	b = malloc(sizeof(int *) * height);

	if (b == NULL)
	{
		free(b);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		b[i] = malloc(sizeof(int) * width);
		if (b[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(b[j]);
			}
			free(b);
			return (NULL);
		}
	}
	for (k = 0; k < width; k++)
	{
		for (l = 0; l < width; l++)
		{
			b[k][l] = 0;
		}
	}
	return (b);
}

