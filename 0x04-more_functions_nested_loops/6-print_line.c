#include "main.h"

/**
 * print_line - function that draws a straight lin
 * @n: Where n is the number of the character
 * @a: the line should end with a\n
 * Return: 0 Always
 */

void print_line(int n)
{
	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	while (i = 0; i < n; i++)
	{
	_putchar('_');
	}
	_putchar('\n');
	}
}
