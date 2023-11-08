#include <stdio.h>
#include <string.h>
#include "dog.h"

/**
 * init_dog - initialize a dog
 * @d: the dog to initialize
 * @name: the dog's name
 * @age: the dog's age
 * @owner: owners's name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = strdup(name);
		d->age = age;
		d->owner = strdup(owner);
	}
}
