#include "lists.h"

/**
 * dlistint_len - returns the length of a D.L.L
 * @h: head node.
 *
 * Return: number of nodes on the D.L.L
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		h = h->next;
		length++;
	}
	return (length);
}
