#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints string followed by a new line
 * @separator: the strin to be printed
 * @n: The strings parameter
 * Return: Variable number.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	const char *current_string;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		current_string = va_arg(args, const char *);
		if (current_string == NULL)
			printf("nil)");
		else
			printf("%s", current_string);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}
