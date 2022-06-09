#include "lists.h"

/**
 * print_dlistint - prints all the elements in a doubly linked list
 * @h: nodes
 *
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n_nodes = 0;
	const dlistint_t *current_node = h;

	while (current_node != NULL)
	{
		printf("%i\n", current_node->n);
		current_node = current_node->next;
		n_nodes++;
	}
	return (n_nodes);
}
