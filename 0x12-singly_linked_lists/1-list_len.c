#include "lists.h"
#include <stdio.h>

/**
 * list_len - returns the number of elements in a linked list
 * @h: the linked list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	const list_t *current_node = h;
	
	current_node = current_node->next;
	return (current_node->len);
}
