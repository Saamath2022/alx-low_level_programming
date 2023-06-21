#include "main.h"

/**
 *checks if the given characters is lowercase
 *@param c The character to check
 *@Return 1 if the character is lowercase, 0 otherwise
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
