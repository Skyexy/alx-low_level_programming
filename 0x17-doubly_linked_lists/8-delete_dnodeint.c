#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t
 * @head: beginning of dlistint_t
 * @index: unsigned int
 * Return: int
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node1;

	if (head == NULL)
		return (-1);

	node1 = *head;

	if (node1 == NULL)
		return (-1);

	while (index != 0)
	{
		node1 = node1->next;
		index--;
		if (node1 == NULL)
			return (-1);
	}

	if (node1->prev != NULL)
		node1->prev->next = node1->next;
	else
	{
		*head = node1->next;
		if (node1->next != NULL)
			node1->next->prev = NULL;
		free(node1);
	}

	return (1);
}
