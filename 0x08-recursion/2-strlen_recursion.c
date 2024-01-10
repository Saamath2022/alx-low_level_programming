#include <stdio.h>
/**
 * _strlen_recursion - Print the  string length
 * @s: The inpute string
 * Description: This function takes a string as string as input and recursion
 * calcualtes its length.
 * Return: Void
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
