#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name- print a name
 * @name: Pointer argment paramter
 * @f: pointer to the function
 *
 * Return: Void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
