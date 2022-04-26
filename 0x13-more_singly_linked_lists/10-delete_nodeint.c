#include "lists.h"
/**
 * delete_nodeint_at_index - delete a new node at a given position.
 * @head: pointer with the first node.
 * @index: the index of the node
 * Return: 1 0r -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p, *temp;
	unsigned int i;

	if (index == 0)
	{
		p = *head;
		*head = p->next;
		free(p);
		return (1);
	}
	temp = *head;
	i = 1;
	while (temp != NULL)
	{
		if (i == index -1)
		{
			p = temp;
			temp = temp -> next;
			free(p);
			return (1);
		}
		temp = temp->next;
		i++;
	}
	return (-1);
}
