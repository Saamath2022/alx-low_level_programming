#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * free_listint2 - Frees a listint_t list.
 * @head: Pointer to the head of the list
 * Description: This function frees a listint_t list and sets the head to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}

