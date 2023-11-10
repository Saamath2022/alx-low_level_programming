#include "variadic_function.h"
#include <stdarg.h>

/**
 * t_numbers - Prints numbers followed by a separator
 * @separator: The string to be printed between numbers
 * @n: The number of integers passed to the function
 * @...: Variable number of arguments representing integers to be printed
 *
 * Description: This function takes a variable number of integer arguments
 * and prints them with the specified separator string in between. The
 * total number of integers to be printed is determined by the 'n' parameter.
 * Make sure to call va_start and va_end before and after using this function.
 */
void t_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		if (!separator)
			printf("%d", va_arg(list, int));
		else if (separator && n - 1)
			printf("%d", va_arg(list, int));
		else
			printf("%s %d", separator, va_arg(list, int));
	}
	va_end(list);
	printf("\n");
}
