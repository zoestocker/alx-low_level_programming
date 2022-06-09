#include "lists.h"

/**
 * free_dlistint - fress a dlistint_t list
 * @head: the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_node;
	dlistint_t *next;

	current_node = head;

	while (current_node != NULL)
	{
		next = current_node->next;
		free(current_node);
		current_node = next;
	}
}
