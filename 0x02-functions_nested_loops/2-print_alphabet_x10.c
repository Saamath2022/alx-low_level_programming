#include "main.h"
#include <unistd.h>

/**
 * prints_alphabet_x10-make alphabet x10 times
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void)

{
	char c; // Start with lowercase 'a'.
	int i = 0;

	while (i <= 9)
	{
	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
	i++;
	}
}
