#include <stdio.h>

void _puts_recursion(char *s);

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	_puts_recursion("Puts with recursion");
	return (0);
}

/**
 * _puts_recursion - Print a string followed by a new line
 * @s: the string to print
 *
 * Return: Void
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
	_puts_recursion(s + 1);
}

