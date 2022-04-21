#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: the list_t list
 *
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n_nodes = 0;
	const list_t *current_node = h;

	if (h == NULL)
	{
		printf("[%d] (nil)", current_node->len);
	}
	while (current_node != NULL)
	{
		printf("[%d] %s\n", current_node->len,
		current_node->str);
		current_node = current_node->next;
		n_nodes++;
	}
	return (n_nodes);
}
