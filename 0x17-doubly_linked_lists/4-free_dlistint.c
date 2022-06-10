#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: head of dlistint_t
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node1 = head, *free_tmp;

	if (!head)
		return;

	while (node1->next)
	{
		free_tmp = node1;
		node1 = node1->next;
		free(free_tmp);
	}

	free(node1);
}
