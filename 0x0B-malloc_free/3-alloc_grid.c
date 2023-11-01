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
	int **tab, x, y;

	tab = malloc(sizeof(tab) * height);

	if (width <= 0 || height <= 0 || tab == 0)
	{
		return (NULL);
	}
	else
	{
		for (x = 0; x < height; x++)
		{
			tab[x] = malloc(sizeof(**tab) * width);
			if (tab[x] == 0)
			{
				while (x--)
					free(tab[x]);
				free(tab);
				return (NULL);
			}
			for (y = 0; x < width; y++)
				tab[x][y] = 0;
		}
	}
	return (tab);
}
