#include "main.h"

/**
 * _print_last_digit - print the last digit of a number
 * Return: value of the last digit
 */

int print_last_digit(int num)
{
	int lastDigit = num % 10;

	if (lastDigit < 0)
	{	
		lastDigit = -lastDigit;
	}

	_putchar(lastDigit);

	return (lastDigit);
}
