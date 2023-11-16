#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - prints all elements of linked list
 * @h: pointer to list_t list to ptint
 * Return: no. of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nod = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nod++;
	}

	return(nod);
}
