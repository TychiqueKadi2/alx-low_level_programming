#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds new node at end
 * @head: start of linked list
 * @str: string
 * Return: address of the head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *old_node;
	size_t a;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (a = 0; str[a]; a++)
		;

	new_node->len = a;
	new_node->next = NULL;
	old_node = *head;

	if (old_node == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (old_node->next != NULL)
			old_node = old_node->next;
		old_node->next = new_node;
	}

	return(*head);
}
