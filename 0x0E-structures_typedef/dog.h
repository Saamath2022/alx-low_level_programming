#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic info
 * @name: dog's name
 * @age: dog's age
 * @owner: Owner's name
 * Description: Just a long dong struct in a b ig kitty world
 */
struct dog
{
	char *name;
	float age;
	char owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
