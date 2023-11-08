#include <stdio.h>
#include <dog.h>

/**
 * init_dog - Initialize a dog structure
 * @d: pointer to struct dog
 * @name: name to be initialized
 * @age: age to inititialized
 * @owner: the do's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = strcpy(name);
		d->age = age;
		d->owner = strcpy(owner);

	}
}

