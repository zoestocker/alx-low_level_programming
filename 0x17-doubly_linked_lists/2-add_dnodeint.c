#include "lists.h"

/**
 * add_dnodeint - adds a new node to the beginning of a dlistint_t list
 * @head: list
 * @n: integer
 *
 * Return: Address of the new element or NULL upon failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = (dlistint_t *) malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
