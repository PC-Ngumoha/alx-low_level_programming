#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at specified index in D.L.L
 * @h: Address of pointer to head node
 * @idx: index at which to add the new node
 * @n: data to be added to the D.L.L
 *
 * Return: address of new node (Success) or NULL (failed)
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr, *new_node;
	unsigned int i = 0;

	if (*h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	curr = *h;
	while (curr != NULL)
	{
		if (i == idx)
		{
			(curr->prev)->next = new_node;
			new_node->prev = curr->prev;
			curr->prev = new_node;
			new_node->next = curr;
			return (new_node);
		}
		curr = curr->next;
		i++;
	}
	free(new_node);
	return (NULL);
}
