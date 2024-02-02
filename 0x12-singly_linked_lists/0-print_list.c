#include <stdio.h>
#include <string.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_list - Prints all the element in the list
 * @h: parameter to be used
 * Return: if str NULL print 0 or ni
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}


