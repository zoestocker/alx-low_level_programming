#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - frees a singly linked list
 * @head: the list
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
