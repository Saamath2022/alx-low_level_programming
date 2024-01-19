#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _realloc - write a function reallocate memory using malloc & free
 * @ptr: pointer to memory allocated
 * @old_size: A pointer ping to bytes
 * @new_size: sie in byes of the new memory
 * Return: Always 0 othwise 1.
 */

void* _realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *p;
	
	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		return (p);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
       p = malloc(new_size);
       if (p == NULL)
	       return (NULL);
       
       for (i = 0; i < old_size && i < new_size; i++)
       {
	       p[i] = ((char *)ptr)[i];
       }
       free(ptr);
       return (p);
}
