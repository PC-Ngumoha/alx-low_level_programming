#include "lists.h"

/**
 * print_listint_safe - prints out the contents of the linked list
 * @head: pointer to a node on the linked list
 *
 * Return: number of nodes on the linked list
 */
size_t print_listint_safe(const listint_t *head)
{
	unsigned int nodes = 0;
	long int diff;

	if (head == NULL)
		exit(98);
	while (head != NULL)
	{
		diff = head - head->next;
		nodes++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (diff > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (nodes);
}
