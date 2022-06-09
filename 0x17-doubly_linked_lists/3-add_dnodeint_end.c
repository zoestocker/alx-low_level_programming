#include "lists.h"

/**
 * add_dnodeint_end - adds a node to the end of a doubly linked list
 * @head: list
 * @n: int
 *
 * Return: The address of the new element or NULL upon failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *current_node;

	current_node = *head;
	while (current_node && current_node->next != NULL)
	{
		current_node = current_node->next;
	}

	new_node = (dlistint_t *) malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (current_node)
	{
		current_node->next = new_node;
	}
	else
	{
		*head = new_node;
	}
	return (new_node);
}
