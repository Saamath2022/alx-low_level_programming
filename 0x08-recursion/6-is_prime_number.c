#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - write a function that returns 1 if the input
 * integer is prime number else return 0.
 * @n: Integer input
 * Return: 1 else 0.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
