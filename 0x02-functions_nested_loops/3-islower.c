#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c: The character to be checked
 * Returns: 1 if c is a letter, lowercase or uppercase.
 */

int _islower(int c)
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
