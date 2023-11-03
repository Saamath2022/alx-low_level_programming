#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *malloc_checked - allocates memory using malloc
 * @b: int
 * Return: pointer to the array initilized or 0.
 */

void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == 0)
		exit(98);

	return (ptr);
}
