#include <stdio.h>
#include "main.h"

/*
* factorial - Return a factorial of a given number
* @n: integer to calculate
* Return: Always 0
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
