#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * create_list - Creates a singly linked list from an array of integers
 * @array: Pointer to the array of integers
 * @size: Size of the array
 * Return: Pointer to the head of the created list, or NULL on failure
 */
listint_t *create_list(int *array, size_t size)
{
	listint_t *head = NULL, *new_node = NULL, *temp = NULL;
	size_t i;

	for (i = 0; i < size; i++)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
		{
			free_list(head);
			return (NULL);
		}
		new_node->n = array[i];
		new_node->index = i;
		new_node->next = NULL;
		
		if (head == NULL)
			head = new_node;
		else
			temp->next = new_node;
		temp = new_node;
	}
	return head;
}
/**
 * print_list - Prints a singly linked list of integers
 * @list: Pointer to the head of the list
 */

void print_list(const listint_t *list)
{
	const listint_t *current = list;
	printf("List :\n");
	while (current != NULL)
	{
		printf("Index[%lu] = [%d]\n", current->index, current->n);
		current = current->next;
	}
	printf("\n");
/**
 * free_list - Frees a singly linked list of integers
 * @list: Pointer to the head of the list
 */
void free_list(listint_t *list)
{
	listint_t *current;
	while (list != NULL)
	{
		current = list;
		list = list->next;
		free(current);
	}
							        }
}

