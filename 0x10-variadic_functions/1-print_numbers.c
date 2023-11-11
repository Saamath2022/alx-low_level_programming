#include "variadic_function.h"
#include <stdarg.h>

/**
 * print_numbers - Prints numbers followed by a separator
 * @separator: The string to be printed between numbers
 * @n: The number of integers passed to the function
 * @...: Variable number of arguments representing integers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	if (n > 0)
	{
		unsigned int i;
	
		va_list list;
	
		va_start(list, n);
	
		for (i = 0; i < n - 1; i++)
		{
			if (!separator)
				printf("%d", va_arg(list, int));
			else
				printf("%d%s", va_arg(list, int), separator);
		}
		printf("%d", va_arg(list, int));

		va_end(list);
		printf("\n");
    	}
}
