#include "main.h"
/**
 * reverse_array - Reverse the content of an array integers.
 * @a: the array of integers to be reversed.
 * @s: The number or elements in the arrays.
 */

void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index > n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
