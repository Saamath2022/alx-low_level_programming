#include "main.h"

/**
 * _put _recursion - prints a string, following by a new line.
 * @s: The string
 * Return: void
 */
void _put_recursion (char *s)
{
	if (*s == '\n')
	{
		_putchar('\n');
		return;
	}
	_putcha char(*s);
	s++;
	_puts_recursion(s);
}
