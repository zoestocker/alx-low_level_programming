#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a doubly linked lists
 * @h: node
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
