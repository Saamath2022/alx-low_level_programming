#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A new type describing a dog
 * @name: Name of the dog
 * @age: The Dog age
 * @owner: The owner of the dog.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: Pointer to the struct dog to be initialized.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - Prints information about a dog.
 * @d: Pointer to the struct dog to be printed.
 */
void print_dog(struct dog *d);

/**
 * new_dog - Creates a new dog with specified attributes.
 * @name: Name of the new dog.
 * @age: Age of the new dog.
 * @owner: Owner of the new dog.
 * Return: Pointer to the new dog.
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - Frees the memory allocated for a dog structure.
 * @d: Pointer to the struct dog to be freed.
 */
void free_dog(dog_t *d);

/**
 * _strlen - Returns the length of a string.
 * @s: Input string.
 * Return: Length of the string.
 */
int _strlen(char *s);

/**
 * _strcpy - Copies a string from source to destination.
 * @dest: Destination buffer.
 * @src: Source string.
 * Return: Pointer to the destination buffer.
 */
char *_strcpy(char *dest, char *src);

#endif /* DOG_H */

