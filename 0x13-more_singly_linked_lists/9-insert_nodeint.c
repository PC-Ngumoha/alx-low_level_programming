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
	listint_t *prev;
	listint_t *curr = *head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	if (*head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while ((curr != NULL) && (i < idx))
	{
		prev = curr;
		curr = curr->next;
		i++;
	}
	if (i < idx)
		return (NULL);

	prev->next = new_node;
	new_node->next = curr;
	return (new_node);
}
