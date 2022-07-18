#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - dds a new node at the beginning of a listint_t list.
 * @head: linked lists
 * @n: number to linked
 * Return: new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = (listint_t *)malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = (*head);

	(*head) = newNode;

	return (newNode);
}
