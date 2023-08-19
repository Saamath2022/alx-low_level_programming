#include "function_pointers.h"

/**
 * array_iterator - mas an array through a function pointer
 * @array: The int array
 * @size: How many size elements to print
 * @action: A pointer to the function to be executed
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
