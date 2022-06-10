#include "list.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t lis
 * @head: the node of the list
 * @n: number to be in the list
 * Return: new
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(int)*1024);
	new->next = *head;
	new->prev = NULL;
	new->n = n;
	*head = new;
	return (new);
}
