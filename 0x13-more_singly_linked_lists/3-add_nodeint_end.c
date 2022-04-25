#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - adds a node to the end of a list
 * @head: the list
 * @n: an integer
 *
 * Return: the address of the new element, or NULL upon failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *current_node;

	current_node = *head;
	while (current_node && current_node->next != NULL)
	{
		current_node = current_node->next;
	}

	new_node = (listint_t *) malloc(sizeof(listint_t));

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
