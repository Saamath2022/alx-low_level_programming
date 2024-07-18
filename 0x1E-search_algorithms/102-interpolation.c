#include <stdio.h>
#include "search_algos.h"
#include <math.h>

/**
 * interpolation_search - searches for a value in a sorted array insing interpolation search.
 * @array: Pointer to the first element fo the array to search
 * @size: Number of elements in the arrray
 * @value: the value to search for
 * Return: the first index where the value is located
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;

	if (array == NULL || size == 0)
		return (-1);

	low = 0;
	high = size -1;

	while (low <= high && value >= array[low] && value <= array[high])
	{
	if (low == high)
		{
			if (array[low] == value)
				return (low);
			return (-1);
		}
	pos = low + (((double)(high - low) / (array[high] - array[low])) * (value -array[low]));

	if (pos >= size)
	{
		printf("Value checked array[%ld] is out of range\n", pos);
		return (-1);
	}

	printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
	if (array[pos] == value)
		return (pos);
	if (array[pos] < value)
		low = pos + 1;
	else
		high = pos - 1;
	}

	return (-1);
}
