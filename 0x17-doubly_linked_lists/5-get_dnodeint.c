#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: beginning of the dlistint_t
 * @index: unsigned int
 * Return: dlistint_t
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node1 = head;
	unsigned int n = 0;

	if (!head)
		return (NULL);

	while (node1)
	{
		if (n == index)
			return (node1);

		node1 = node1->next;
		n++;
	}

	return (NULL);
}
