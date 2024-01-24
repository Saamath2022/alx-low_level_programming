#ifndef DOG_H
#define DOG_H

/**
 * init_dog - Represents information about a dog
 * @name: name of the  dog
 * @age: age of the dog
 * @owner: Owner of the dog.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* DOG_H */

#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Intializes a variabe of type struct dog.
 * @d: pointer to the struct dog
 * @name: nae of the dog
 * @age: Age of the og
 * owner: Onwer of the dog.
 * Description: this function initilizes the members of struct dog
 * with the provide values.
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
/**
 * main - entry point of the programme
 * Return: always 0 (success)
 */
int main(void)
{
	struct dog myDog;

	init_dog(&myDog, "Doggy", 3.5, "Bush Man");

	printf("Name: %s\n", myDog.name);
	printf("Age: %.2f\n", myDog.age);
	printf("Owner: %s\n", myDog.owner);


	return (0);
}

