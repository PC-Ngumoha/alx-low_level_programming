#include "lists.h"

/**
 * add_nodeint_end - adds a new node to the end of the linked list
 * @head: a pointer to a pointer to the linked list
 * @n: value used to set the new node's 'n' attribute
 *
 * Return: pointer to the new head of the linked list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = *head;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_node;
	return (*head);
}
