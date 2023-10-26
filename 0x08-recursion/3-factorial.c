#include "main.h"

/**
 * factorial - to return a given number of a factorial
 * @n: An integer to be given
 * Return: 1 or else -1.
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
