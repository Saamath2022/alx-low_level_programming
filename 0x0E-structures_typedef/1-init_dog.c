#include <dog.h>
#include <stdio.h>

/**
 * init_dog - Initialize a dog structure
 * @d: pointer to struct dog
 * @name: a dog's name to be initialized
 * @age: a dog age to be inititialized
 * @owner: the dog's owner
 *
 * Return: Always 0.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;

}

