#include "main.h"

/**
 * _print_rev_recurseion - Print a sring in reverse
 * @s: The string to reverse
 * Return: nothing
 */

void _print_reverse(char *s)
{
	if (*s == 0)
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	_putchar(*s);
}
