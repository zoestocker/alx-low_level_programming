#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: list
 * @idx: index
 * @n: integer
 *
 * Return: Address of the new node or Null upon failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current_node;
	dlistint_t *new_node;

	if (h == NULL)
	{
		return (0);
	}
	new_node = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (0);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *h;
		(*h) = new_node;
		return (new_node);
	}
	current_node = *h;

	while (idx != 1)
	{
		current_node = current_node->next;
		--idx;
		if (current_node == NULL)
		{
			free(new_node);
			return (NULL);
		}
	}
	new_node->next = current_node->next;
	current_node->next = new_node;

	return (new_node);
}
