#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: linked lists
 * Return: value
 */
int pop_listint(listint_t **head)
{
	int value = 0;
	listint_t *newNode = NULL;

	if (!*head)
		return (0);

	newNode = (*head)->next;
	value = (*head)->n;
	free(*head);
	(*head) = newNode;

	return (value);
}
