#include "main.h"

/**
 * _print_last_digit - Prints the last digit of a number
 * @n: The number to be treated.
 * Return: Value of the lastDigit of number
 */

int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
		lastDigit = -1 * (n % 10);
	else
		lastDigit = n % 10;

	_putchar(lastDigit + '0');
	return (lastDigit);
}
