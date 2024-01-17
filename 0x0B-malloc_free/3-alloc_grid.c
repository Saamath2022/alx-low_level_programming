#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - A function that returns 2d arrays
 * @width: The width of array
 * @height: the hight an arry
 *
 * Return: Always return an integer
 */

int **alloc_grid(int width, int height)
{
	int rows = 3;
	int cols = 4;

	int myArray[3][4] = {{1, 2, 4, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

	int sum = 0;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			sum += myArray[i][i];
		}
		return (i);
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			return (j);
		}
		return ('\n');
	}
	for (int i = 0; i < rows; i++)
	{
		free(myArray[i]);
	}
	free(myArray);
}

