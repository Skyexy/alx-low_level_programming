#include "lists.h"

/**
 * add_dnodeint_end - add a new node at the end of the dlistint_t list
 * @head: beginning of the doubly linked list
 * @n: integer
 * Return: dlistint_t
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *node1;

	node1 = *head;
	while (node1 && node1->next != NULL)
		node1 = node1->next;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = NULL;
	new->prev = node1;

	if (node1)
		node1->next = new;
	else
		*head = new;

	return (new);
}
