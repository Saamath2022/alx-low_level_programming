#include <stdio.h>
#include "search_algos.h"
/**
 * print_array - prints the elements of an array between indices
 * @array: Pointer to the first element of the array to search.
 * @left: Starting indext to print from
 * @right: ending index to print
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
/**
 * binary_search - searches for a value in a sorted array
 * @array: Pointer to the first element of the array to search
 * @size: Number of elements in the array.
 * @value: Valute to search for.
 * Return: the index where value is located, or -1 if the value is not found
 *
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid;

	if (array == NULL)
		return (-1);
	left = 0;
	right = size - 1;

	while (left <= right)
	{
		print_array(array, left, right);
		mid = (left + right) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid -1;
	}
	return (-1);
}
