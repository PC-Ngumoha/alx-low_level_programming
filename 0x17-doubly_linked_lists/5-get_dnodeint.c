#include "lists.h"

/**
 * get_dnodeint_at_index - returns the node at specified index
 * @head: head node
 * @index: index of node to get
 *
 * Return: address of returned node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	curr = head;
	while (curr != NULL)
	{
		if (i == index)
			return (curr);
		curr = curr->next;
		i++;
	}
	return (NULL);
}
