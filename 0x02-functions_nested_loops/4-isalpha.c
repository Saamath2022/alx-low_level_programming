#include "main.h"
#include <unistd.h>

/**
 * _isalpha - function that checs for alphabetc character
 * Return: 1 if a letter is alphabet otherwise 0.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
