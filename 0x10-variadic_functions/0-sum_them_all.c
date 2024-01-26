#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all parameters.
 * @n: The number of parameters.
 *
 * Return: Sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int j, sum = 0;

	va_start(ap, n);

	for (j = 0; j < n; j++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);

	return (sum);
}

