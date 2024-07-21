#include <stdio.h>
#include "search_algos.h"
#include <math.h>
/**
 * print_array - prints an array of integers
 * @array: the array to be printed
 * @left: Starting index of the array
 * @right: Ending index of the array
 */

void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < right)
			printf(", ");
	}
	printf("\n");
}
int binary_search_recursive(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	if (right < left)
		return (-1);

	print_array(array, left, right);
	mid = left + (right - left) / 2;

	if (array[mid] == value && (mid == left || array[mid - 1] != value))
	return (mid);

	if (array[mid] >= value)
		return (binary_search_recursive(array, left, mid, value));
	return (binary_search_recursive(array, mid + 1, right, value));
}

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: The value to search for 
 * Return: The index where the value is located, or -1 if not present
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return (binary_search_recursive(array, 0, size - 1, value));
}
