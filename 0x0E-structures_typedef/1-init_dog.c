#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Intializes a variablie of type struct dog.
 * @d: pointer to the struct dog
 * @name: nae of the dog
 * @age: Age of the og
 * @owner: Onwer of the dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

