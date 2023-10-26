#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - A function that returns the power
 * value of x to the power y.
 * @x: Integer value of x
 * @y: Integer value of y
 * Return: return -1 else 0.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}

}
