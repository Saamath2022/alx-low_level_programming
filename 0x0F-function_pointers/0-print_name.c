#include "function_pointers.h"

/**
 * print_name - pints a name
 * @name: the string name
 * @f: the print the function poointer
 *
 * Return: Alway nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
