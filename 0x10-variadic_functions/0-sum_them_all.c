#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - calculate the sum of all the parameters
 * @n: number of arguments passedinto the function
 *
 * Return: the resulting sume
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);

}
