#include "lists.h"
/**
 * add_dnodeint - adds new node at beginning of dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *store_next;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	store_next = *head;

	if (store_next != NULL)
	{
		while (store_next->prev != NULL)
			store_next = store_next->prev;
	}

	new_node->next = store_next;

	if (store_next != NULL)
		store_next->prev = new_node;

	*head = new_node;

	return (new_node);
}
