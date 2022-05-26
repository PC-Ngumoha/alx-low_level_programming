#include "lists.h"

/**
 * print_listint - prints out the contents of the linked list
 * @h: points to a node on the linked list
 *
 * Return: number of nodes on the list
 */
size_t print_listint(const listint_t *h)
{
	unsigned int nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
