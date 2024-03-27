#include "main.h"

/**
 * _abs - function that computes the absolute
 * value of an integer.
 *@n: take integer type input for function.
 * Return: Always bsolute value of number or zero.
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
	{
	int abs_val;

	abs_val = n * -1;
	return (abs_val);
	}
	return (n);
}
