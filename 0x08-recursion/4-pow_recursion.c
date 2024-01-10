#include <stdio.h>

/**
 * _pow_recursion - Functions that returns the value
 * of x to power of the Number
 * @x: the integer parameter to pass args
 * @y: the integer paremeter to pass agrs
 * Return: Always 0.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
