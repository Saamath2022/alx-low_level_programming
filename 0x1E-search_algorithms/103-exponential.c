#include <stdio.h>
#include "search_algos.h"
#include <math.h>

/**
 * binary_search_helper - Helper function to perform binary search within a range.
 * @array: Pointer to the first element of the array to search in.
 * @left: The starting index of the subarray.
 * @right: The ending index of the subarray.
 * @value: The value to search for.
 * Return: The index where the value is located, or -1 if not present.
 */
int binary_search_helper(int *array, size_t left, size_t right, int value)
{
	size_t mid, i;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");

		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array using Exponential
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 * Return: The first index where the value is located, or -1 if not present.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, i;

	if (array == NULL || size == 0)
		return (-1);
	
	if (array[0] == value)
		return (0);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	size_t left = bound / 2;
	size_t right = (bound < size) ? bound : size - 1;

	printf("Value found between indexes [%ld] and [%ld]\n", left, right);

	return binary_search_helper(array, left, right, value);
}
