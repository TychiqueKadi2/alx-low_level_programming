#include "lists.h"

/**
 * pop_listint - deletes head node of linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the data that was deleted, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int lot;
       
	if (!head || !*head)
	return (0);

	lot = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (lot);
}
