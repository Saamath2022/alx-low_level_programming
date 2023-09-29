
#include "main.h"
#include<stdio.h>
/**
 * factorial - Function that return a factorial of a given number
 * @n: the number of the factorial to be calculated
 * Return: integer number.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
