#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list of integers using Jump search
 * @list: Pointer to the head of the list to search in
 * @size: Number of nodes in the list
 * @value: The value to search for
 * Return: Pointer to the first node where value is located, or NULL if not found
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *current = list;

	size_t jump = (size_t)sqrt(size);
	size_t prev_index = 0;

	if (list == NULL || size == 0)
		return NULL;
	while (current->index < jump && current->next != NULL)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		if (current->n == value)
			return (current);
		prev_index = current->index;
		current = current->next;
	}
	printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
	printf("Value found between indexes [%lu] and [%lu]\n", prev_index, current->index);
	while (current != NULL && current->index <= size - 1)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		if (current->n == value)
			return current;
		current = current->next;
	}
	return NULL;
}

