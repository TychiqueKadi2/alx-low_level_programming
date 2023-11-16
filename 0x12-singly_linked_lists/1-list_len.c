#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - shows no. of elements in list
 * @h: linked list
 *
 * Return: no. of elements in list
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		h = h->next;
		num++;
	}

	return (num);
}
