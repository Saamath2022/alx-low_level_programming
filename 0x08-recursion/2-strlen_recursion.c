#include "main.h"

/**
 * _strlen_recursion - write a function to  prints string length
 * @s: String pointer
 * Return: Void
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
