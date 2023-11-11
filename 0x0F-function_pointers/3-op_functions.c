#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: the first int 
 * @b: the second int
 * Return: the sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/** op_sub - subtracts two integers
 * @a: the first int to be used
 * @b: the second integer to be used
 * Return: the answer
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integer
 * @a: the first int
 * @b: the second int to be multiplied
 * Return: The output.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two integer
 * @a: the first int to be divide
 * @b: the second int to be divid
 * Return: The output.
 */

int op_div(int a, int b)
{
	return (a / b);

}

/**
 * op_mod - calculate the remainder of two integers
 * @a: the first int
 * @b: the second int
 * Return: The output.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
