#include "main.h"
/**
 * print_most_numbers - prints 0 to 9
 * Return: void
 */

void print_most_numbers(void)
{
	char num;

	for (num = 0; num <= 9; c++)
	{
		if (num != 2 && num != 4)
		{
		_putchar(num + '0');
		}
	}
	_putchar('\n');
}
