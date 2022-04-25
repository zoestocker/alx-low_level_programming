#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - returns the number of elements in a listint_t list
 * @h: the list
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *current_node = h;

	current_node = current_node->next;
	return (current_node->n);
}
