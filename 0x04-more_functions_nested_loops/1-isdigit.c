#include "main.h"

/**
 * _isdigit - check for the last digit
 * @c: input character
 * Return: (1) if it is true and (0) if it is false
 */

int _isdigit(int c);
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

