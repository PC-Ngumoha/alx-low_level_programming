#include "lists.h"

/**
 * listint_len - determines the length of a linked list
 * @h: points to a node on a linked list
 *
 * Return: number of nodes on the linked list
 */
size_t listint_len(const listint_t *h)
{
	unsigned int nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
