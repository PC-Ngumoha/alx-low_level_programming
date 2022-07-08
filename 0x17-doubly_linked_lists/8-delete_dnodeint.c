#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node on a D.L.L
 * @head: pointer to the address of head node
 * @index: index of node to delete from the D.L.L
 *
 * Return: 1 (Success) or -1 (fail)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	curr = *head;
	if (index == 0)
	{
		if ((*head)->next != NULL)
		{
			*head = (*head)->next;
			(*head)->prev = NULL;
		}
		else
			*head = (*head)->next;
		free(curr);
		return (1);
	}
	while (curr != NULL)
	{
		if (i == index)
		{
			if (curr->next != NULL)
			{
				(curr->prev)->next = curr->next;
				(curr->next)->prev = curr->prev;
			}
			else
				(curr->prev)->next = curr->next;
			free(curr);
			return (1);
		}
		curr = curr->next;
		i++;
	}
	return (-1);
}
