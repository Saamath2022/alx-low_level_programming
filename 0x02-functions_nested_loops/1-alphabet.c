#include "main.h"
#include <unistd.h>

/**
 * print_alphabet - in lower case
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
_putchar(ch);
_putchar('\n');
}
