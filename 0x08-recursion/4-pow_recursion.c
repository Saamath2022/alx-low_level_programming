#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - Function that prints the value of x & y
 * @x: The power value of x to be calculated
 * @y: Input the power value of y to be calculated
 * Return: Integer value
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);

	else
		return (x * _pow_recursion(x, y - 1));


}
