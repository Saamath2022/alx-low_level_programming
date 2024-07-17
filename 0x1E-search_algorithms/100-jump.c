#include <stdio.h>
#include <math.h>

/**
 * Jump_search - Searches for a value in a sorted array using Jump search
 * @array: A pointer to the first element of the array to search in
 * @Size: The number of elements in array
 * @Value: The value to search for
 *
 * Return: The first index where value is located, or -1 if value is not present
 *
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step, prev, i;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	prev = 0;

	while (array[prev] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		if (prev + step >= size)
			break;
		prev += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", prev - step, prev);

	for (i = prev - step; i <= prev && i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

