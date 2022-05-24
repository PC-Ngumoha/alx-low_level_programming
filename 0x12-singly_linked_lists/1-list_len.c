#include "lists.h"

/**
 * list_len - returns the number of nodes in the linked list
 * @h: points to the first node in the linked list
 *
 * Return: number of nodes in linked list
 */
size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
