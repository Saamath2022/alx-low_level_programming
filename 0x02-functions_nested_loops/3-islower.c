#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c: The character to be checked
 * Returns: 1 for lowercase character 0 for anything else.
 */

int _islower(int c) // prototype to check whether the character is lower
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
