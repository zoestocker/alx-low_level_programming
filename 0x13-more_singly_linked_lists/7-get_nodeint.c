#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: the list
 * @index: the index
 *
 * Return: the nth node, or NULL if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node;

	if (head == NULL)
	{
		return (0);
	}
	current_node = head;

	while (index != 0)
	{
		current_node = current_node->next;
		index--;
		if (current_node == NULL)
		{
			return (0);
		}
	}
	return (current_node);
}
