#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dong's basic infor
 * @num: first number
 * @age: second number
 * @number: Third number
 * Description: Longer description
 *
 *
 */
struct dog
{
	char *name;
	float age;
	char encounter;
}

/**
 * dog_t - typef of screte
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *age, char *owner)
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *strc)
int _strlen(char *s);

#endif
