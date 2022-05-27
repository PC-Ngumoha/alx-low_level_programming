#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at an index on the linked list
 * @head: pointer to a pointer to the head node on the linked list
 * @index: specified index
 *
 * Return: 1 (Success) or -1(failed)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev;
	listint_t *curr = *head;
	unsigned int i;

	if (!head || !(*head))
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(curr);
		return (1);
	}
	for (i = 0; curr && (i <= index); i++)
	{
		if (i == index)
		{
			prev->next = curr->next;
			free(curr);
			return (1);
		}
		else
		{
			prev = curr;
			curr = curr->next;
		}
	}
	return (-1);
}
