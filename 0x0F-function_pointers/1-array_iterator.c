#include <stdio.h>
#include "function_pointers.h"


/**
 * array_iterator - Provide a function pointer that executives an array
 * @array: pointer to the array to be executed
 * @action: Pointer to a function to each element
 * @size: size of the array
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array == NULL || action == NULL)
		while (array <= end)
			action(*array);
}

