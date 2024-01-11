#include <stdio.h>
#include "main.h"

/**
 * square_root_recursive - Find the natural square root recursively
 * @n: Integer for which to find the square root
 * @val: Current value being checked
 * Return: The natural square root if found, otherwise -1
 */

int square_root_recursive(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square_root_recursive(n, val + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - Wrapper function to find the natural square root
 * @n: Integer for which to find the square root
 * Return: The natural square root if found, otherwise -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (square_root_recursive(n, 1));
}

/**
 * _sqrt - Find square root of a natural number
 * @n: Integer parameter to find the square root
 * @val: Integer variable
 * Return: The natural square root if found, otherwise -1
 */
int _sqrt(int n, int val)
{
	if (n < 0)
		return (-1);
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (_sqrt(n, val + 1));
	else
		return (-1);
}
