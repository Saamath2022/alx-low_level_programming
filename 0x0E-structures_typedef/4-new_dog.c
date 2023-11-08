#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - A function that calculates the length of a string
 * @s: The string to calculate the length
 * Return: The ilength of @s
 */

int _strlen(const char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++
	}
	return (i);
}

/**
 * _strcopy - A function that copies to a destionation
 * @src: The source string to be copied
 * @dest: The destination for the copied string.
 *
 * Return: The destination string @dest.
 */

char *_strcopy(char *dest, char *src)
{
	int len, i;

	while (src[len] != '\0')
	{
		leng++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - a function that creates a new dog
 * @name: The  name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Return: A pointer to a struct pointer; NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = (dog_t *)malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	_strcopy(dog->name, name);
	dog->age = age;
	_strcopy(dog->owner, owner);

	return (dog);
}

