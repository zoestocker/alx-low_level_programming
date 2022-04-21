#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a node at the end of a list
 * @head: the list
 * @str: the node being added
 *
 * Return: Address of the new element, or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	int new_str;
	int c;

	current_node = *head;
	while (current_node && current_node->next != NULL)
	{
		current_node = current_node->next;
	}
	for (c = 0; str[c] != '\0'; c++)
	;

	new_node = (list_t *) malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = c;
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
