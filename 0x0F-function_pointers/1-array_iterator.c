#include "function_pointers.h"

/**
 * array_interator - Executes a function given as a parameter on
 * each elements of a an array.
 * @array: The int array
 * @size: How many size elements to print
 * @action: A pointer to the function to be executed
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size > 0)
	{
		action(*array);
		array++;
	}
}
