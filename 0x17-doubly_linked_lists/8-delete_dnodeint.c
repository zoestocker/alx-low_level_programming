#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at the index
 * @head: the list
 * @index: the index
 *
 * Return: 1 on success, 0 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node = *head;
	size_t size = 0;

	if (!*head)
	{
		return (-1);
	}
	while (current_node)
	{
		size++;
		current_node = current_node->next;
	}
	if (size < index + 1)
	{
		return (-1);
	}
	current_node = *head;
	if (!index)
	{
		*head = current_node->next;
		if (current_node->next)
		{
			current_node->next->prev = NULL;
		}
		current_node->next = NULL;
		free(current_node);
		return (1);
	}
	while (index--)
	{
		current_node = current_node->next;
	}
	current_node->prev->next = current_node->next;
	if (current_node->next)
	{
		current_node->next->prev = current_node->prev;
	}
	free(current_node);
	return (1);
}
