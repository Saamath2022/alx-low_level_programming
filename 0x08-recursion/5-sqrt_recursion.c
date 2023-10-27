#include <stdio.h>
#include "main.h"

int _sqrt(int n, int i);
/**
 * _sqrt_recursion - A function that retuns square root of a
 * given number
 * @n: Integer to be inputed
 * Return: The natural square root.
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - Find natural quare root of a number recursively
 * @n: Integer value square root of.
 * @i: Iterate number
 * Return: The square root or -1 if not found.
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);

	return (_sqrt(n, i + 1));
}
