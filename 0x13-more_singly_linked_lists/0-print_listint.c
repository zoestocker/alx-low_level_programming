#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: the list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n_nodes = 0;
	const listint_t *current_node = h;

	while (current_node != NULL)
	{
		printf("%i\n", current_node->n);
		current_node = current_node->next;
		n_nodes++;
	}
	return (n_nodes);
}
