#include "main.h"

/**
 * print_diagonal - Draw a diagnal lines according to parameter
 * @n: the number to print diagonal line
 * Return: Sucess
 */

void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 0; x < n; x++)
	{
	for (y = 0; y < n; y++)
	{
	_putchar(32);
	}
	_putchar(92);
	_putchar('\n');
	}
	}
}
