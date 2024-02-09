#include <stdio.h>

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: Unsigned long integer.
 * @index: Index of the bit to get, starting from 0.
 *
 * Return: The value of the bit at the given index (0 or 1),
 *          or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int count, find;


	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	count = 1 << index;
	find = n & count;

	if (find == count)
		return (1);
	return (0);
}
