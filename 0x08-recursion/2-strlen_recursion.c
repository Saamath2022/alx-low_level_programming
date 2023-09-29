#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - Function to return the length of a string
 * @s: The length of the string to be printed
 * Return: Void
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}

