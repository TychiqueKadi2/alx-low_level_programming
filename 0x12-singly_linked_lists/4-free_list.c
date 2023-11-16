#include <stdlib.h>
#include "lists.h"
/**
 * free_list _ frees a list
 * @head: start of linked list
 * Return: none
 */
void free_list(list_t *head)
{
	list_t *node;

	while((node = head) != NULL)
	{
		head = head->next;
		free(node->str);
		free(node);
	}
}
