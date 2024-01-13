#include "main.h"

/**
 * _isdigit - check if parameter is a last digit or character
 * @c: paramter
 * Return: (1) if it is a number and (0) if it is false
 */

int _isdigit(int c)
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

