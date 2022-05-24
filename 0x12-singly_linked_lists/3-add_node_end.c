#include "lists.h"

unsigned int get_length(const char *str);

/**
 * add_node_end - adds a new node to end of linked list
 * @head: pointer to pointer to linked list
 * @str: used to set the str attribute of the new node
 *
 * Return: address of linked list of NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last;
	unsigned int len;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	len = get_length(str);
	last = *head;

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	return (*head);
}

/**
 * get_length - returns the length of a string
 * @str: string parameter
 *
 * Return: length of @str
 */
unsigned int get_length(const char *str)
{
	int i, length = 0;

	if (str == NULL)
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		length++;
		i++;
	}
	return (length);
}
