#include "function_pointers.h"

/**
 * print_name - prints the  name using pointer to function
 * @name: the string name to be added.
 * @f: pointer to function
 * Return: void
 */

void print_name(char *name, void(*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);

}
