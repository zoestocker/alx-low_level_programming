#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: list
 * @index: index
 *
 * Return: the nth node or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_node;

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
