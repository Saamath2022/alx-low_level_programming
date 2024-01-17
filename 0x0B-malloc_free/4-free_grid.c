#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - free the gid
 * @grid: ...
 * @height: intger
 * Return: Always 0
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
