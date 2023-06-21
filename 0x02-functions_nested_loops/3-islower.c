#include "main.h"

/**
 * Checks_lower - Write a function that 
 * checks for lowercase
 * returns: 1
 */

int _islower(int c)
{
	if(c >= 97 && c <= 122)
	{
	return 1;
	}
	else
	{
	return 0;
	}
}
