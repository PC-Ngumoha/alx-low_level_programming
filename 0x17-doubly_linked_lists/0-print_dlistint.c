#include "lists.h"

/**
 * print_dlistint - prints the contents of a doubly linked list
 * @h: head node on the D.L.L
 *
 * Return: Number of nodes in linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_nodes++;
	}
	return (num_nodes);
}
