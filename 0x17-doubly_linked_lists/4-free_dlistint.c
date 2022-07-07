#include "lists.h"

/**
 * free_dlistint - frees up the memory allocated in memory for a D.L.L
 * @head: head node
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		curr = head;
		head = head->next;
		free(curr);
	}
}
