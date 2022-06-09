#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data in a dlistint_t list
 * @head: list
 *
 * Return: the sum or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current_node;

	if (head == NULL)
	{
		return (0);
	}

	current_node = head;
	while (current_node != NULL)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}
	return (sum);
}
