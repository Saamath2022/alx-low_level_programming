#include "main.h"

/**
 * _put _recursion - prints string in reverse.
 * @s: The string to reverse
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
