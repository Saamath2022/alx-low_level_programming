#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - Prints formatted arguments based on the format string.
 * @format: The format string specifying types of arguments ('c' for char,
 *          'i' for int, 'f' for float, 's' for string).
 * @...: Variable number of arguments to be printed.
 *
 * Return: No explicit return value. Outputs the formatted
 * arguments to stdout.
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char c;
	int num;
	float f;
	char *str;

	va_list args;

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == 'c')
		{
			c = va_arg(args, int);
			printf("%c", c);
		}
		else if (format[i] == 'i')
		{
			num = va_arg(args, int);
			printf("%d", num);
		}
		else if (format[i] == 'f')
		{
			f = va_arg(args, double);
			printf("%f", f);
		}
		else if (format[i] == 's')
		{
			str = va_arg(args, char *);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
		}
		i++;
		if (format[i])
		printf(" , ");
	}
	printf("\n");
	va_end(args);
}
