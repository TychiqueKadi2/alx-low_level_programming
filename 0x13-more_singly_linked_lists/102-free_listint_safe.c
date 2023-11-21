#include "lists.h"

/**
 * free_listint_safe - frees linked list
 * @h: pointer to the first node in  linked list
 *
 * Return: n of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int excess;
	listint_t *temp;

	if (!h || !*h)
	return (0);

	while (*h)
	{
		excess = *h - (*h)->next;
		if (excess > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}
	*h = NULL;
	return (length);
}
