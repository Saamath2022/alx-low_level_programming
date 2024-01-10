#include <stdio.h>

/**
 * _print_rev_recursion - Prints a string in revere using recursion
 * @s: The input string to be reversed
 * Description: This function takes a string as input recursively
 * prints it in reverse order
 * Return: Always Nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	putchar(*s);
}
