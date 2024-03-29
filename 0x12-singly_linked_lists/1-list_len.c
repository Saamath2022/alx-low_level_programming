#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - A function that returns the number of elements in a linked.
 * @h: Pointer tor the string of the next node.
 * Return: the Value
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

