#include "lists.h"
/**
 * add_dnodeint_end - adds new node at end of dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *store_next;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	store_next = *head;

	if (store_next != NULL)
	{
		while (store_next->next != NULL)
			store_next = store_next->next;
		store_next->next = new_node;
	}
	else
	{
		*head = new_node;
	}

	new_node->prev = store_next;

	return (new_node);
}
