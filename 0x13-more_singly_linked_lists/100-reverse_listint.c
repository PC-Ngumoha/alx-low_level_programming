#include "lists.h"

/**
 * reverse_listint - returns a linked list reversed
 * @head: pointer to a pointer to the head node of the list we want to reverse
 *
 * Return: pointer to the reversed linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
