#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a specified index.
 * @head: pointer to a pointer to a node on the linked list
 * @idx: specified index
 * @n: value used to set the data segment of the new node
 *
 * Return: address of new node or NULL (if it failed)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *curr = *head;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; (curr != NULL) && (i < idx); i++)
	{
		if (i == idx - 1)
		{
			new_node->next = curr->next;
			curr->next = new_node;
			return (new_node);
		}
		else
			curr = curr->next;
	}
	return (NULL);
}
