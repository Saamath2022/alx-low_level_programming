#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free memory allocated for a dog structrue
 * @d: struct of a dog to be freed
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
