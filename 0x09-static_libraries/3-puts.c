#include "main.h"
/**
 * _puts - Prints a string in reverse
 * @str: The string to print in reverse
 *
 */

void _puts(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
	length++;
	}
	for (int i = length - 1; i >= 0; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
