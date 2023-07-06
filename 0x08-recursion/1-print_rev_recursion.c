#include "main.h"

/**
 * _put _recursion - prints string in reverse.
 * @s: Paramater of string
 * Return: void
 */
void _put_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
