#include <stdlib.h>
#include "lists.h"

/**
 * _listint_len - returns the number of elements in a linked listint_t list.
 * @h: linked list type listint_t
 * Return: the number of nodes
 */
size_t _listint_len(const listint_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t.
 * @head: linked lists
 * @index: index to linked list
 * Return: 1 success or -1 failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = *head, *node;

	if (index > _listint_len(*head))
		return (-1);

	if (tmp &&  index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}

	while (tmp && i < index)
	{
		node = tmp;
		tmp = tmp->next;
		i++;
	}

	if (!tmp)
		return (-1);

	node->next = tmp->next;
	free(tmp);

	return (1);
}
