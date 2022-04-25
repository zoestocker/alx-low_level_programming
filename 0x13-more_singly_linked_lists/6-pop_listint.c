#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the ehad of a linked list
 * @head: the list
 *
 * Return: the head node's date, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *current_node;
	int e;

	if (head == NULL)
	{
		return (0);
	}
	current_node = *head;
	if (current_node == NULL)
	{
		return (0);
	}
	e = current_node->n;
	*head = current_node->next;
	free(current_node);
	return (e);
}
