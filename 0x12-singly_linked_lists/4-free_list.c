#include <stdlib.h>
#include <string.h>
#include "lists.h"
#include <stdio.h>

/**
 * free_list - Frees a list_t linked list.
 * @head: A pointer to the head of the list.
 */
void free_list(list_t *head)
{
	list_t *current_node;
	
	while ((current_node = head) != NULL)
	{
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
}

