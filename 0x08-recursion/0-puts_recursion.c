#include <stdio.h>

/**
 * _puts_recursion - Function that prints a string with a new line
 * @s: array of strings
 *
 * Return: Always 1
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	s++;
	_puts_recursion(s);
}
