#include "lists.h"
#include <stddef.h>

/**
 * print_listint - prints elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: n nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t lot = 0;

	while (h)
	{
		printf("%d\n", h->n);
		lot++;
		h = h->next;
	}
	
	return (lot);
}
