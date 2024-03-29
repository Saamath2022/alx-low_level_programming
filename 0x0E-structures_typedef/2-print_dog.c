#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints dog struct
 * @d: Pointer to the struct of dog
 * Return: Always 0 (success)
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	printf("Name: ");
	if (d->name != NULL)
	{
		printf("%s\n", d->name);
	}
	else
	{
		printf("nil\n");
	}

	printf("Age: ");
	if (d->age < 0)
	{
		printf("nil\n");
	}
	else
	{
		printf("(%f\n", d->age);
	}

	printf("Owner: ");
	if (d->owner != NULL)
	{
		printf("%s\n", d->owner);
	}
	else
	{
		printf("nil\n");
	}
}

