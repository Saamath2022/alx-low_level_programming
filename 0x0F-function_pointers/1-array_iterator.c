#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Provide a function that executives
 * a function given as a parameter of each element of an array
 * @array: pointer to the array to be executed
 * @action: Pointer to a function to each element
 * @size: size of the array
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(*array);
}

