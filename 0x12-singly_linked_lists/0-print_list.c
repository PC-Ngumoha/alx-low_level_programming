#include "lists.h"

/**
 * print_list - prints out the contents of a linked list to the screen
 * @h: points to a node on the linked list
 *
 * Return: Number of nodes on the list
 */
size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		count++;
		h = h->next;
	}
	return (count);
}
