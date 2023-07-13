#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc and exit if it failed.
 * @b: int
 * Return: pointer to the array initiliized or NULL.
 */
void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == 0)
		exit(98);
	return (m);
}
