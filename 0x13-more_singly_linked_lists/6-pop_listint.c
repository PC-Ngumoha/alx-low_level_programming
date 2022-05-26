#include "lists.h"

/**
 * pop_listint - deletes the head node from a linked list
 * @head: pointer to a pointer to the head node of linked list
 *
 * Return: @head node data
 */
int pop_listint(listint_t **head)
{
	int popped;
	listint_t *temp;

	if (head == NULL)
		return (0);
	if (*head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	popped = temp->n;
	free(temp);
	return (popped);
}
