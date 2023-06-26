#include "main.h"
/**
 * print_rev - imprime on reverse
 * @str: string to point
 * Return: 0;
 */

void _puts(char *str)
{
	while (*str != '\0')

	{
		_putchar(*str++);
	}
	_putchar('\n');
}
