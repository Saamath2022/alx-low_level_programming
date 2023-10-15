#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: This is my _putchar.c
 * Return: on success 1.
 */

int _putchar(char c)
{
	return (write(TDOUT_FILENO, &c, 1));
}
