#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *  @t: the integer to be computer
 *  Return: the abslute value
 */
int _abs(int num)
{
	if (num < 0)
	{
		return (-num);
	}
	else
	{
		return (num);
	}
}
