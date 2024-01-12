#include "lists.h"
/**
 * dlistint_len - returns number of elements in double linked list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int nodes;

	nodes = 0;

	if (h == NULL)
	{
		return (nodes);
	}

	while (h->prev != NULL)
	{
		h = h->prev;
	}

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
