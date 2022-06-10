#include "lists.h"

/**
 * sum_dlistint - sum all the data in dlistint
 * @head: beginning of dlistint
 * Return: int
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node1 = head;
	int sum = 0;

	if (!head)
		return (sum);

	while (node1)
	{
		sum += node1->n;
		node1 = node1->next;
	}

	return (sum);
}
