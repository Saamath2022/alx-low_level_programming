#include <stdio.h>
#include "math.h"

/**
 * _sqrt_recursion - Function that returns a natural square
 * root of given number
 * @n: The input number to be calculated
 * Return: An integer value
 */

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}

	int prev_guess = _sqrt_recursion(n - 1);

	return ((prev_guess + n / prev_guess) / 2);
}
