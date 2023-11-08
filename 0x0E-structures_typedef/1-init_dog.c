#include <dog.h>

/**
 * init_dog - Initialize a dog structure
 * @d: pointer to struct dog
 * @name: a dog's name to be initialized
 * @age: age to inititialized
 * @owner: the do's owneri
 *
 * Return: Always 0.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;

	}
}

