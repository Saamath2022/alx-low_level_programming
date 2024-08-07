#include <stdio.h>
#include <stddef.h>

/**
 * linear_search - Search for a value in an array of integers using linear search
 * @array: Pointer to the first element of the array to search
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: The first index wher the value is located or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", (unsigned long)i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
