#include "lists.h"

unsigned int get_length(const char *str);

/**
 * add_node - adds a new node at the beginning of the linked list
 * @head: pointer to the list
 * @str: used to set the str attribute of the new node
 *
 * Return: pointer to the updated list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = (list_t *) malloc(sizeof(list_t));
	unsigned int len;

	if (new_node == NULL)
		return (NULL);
	len = get_length(str);
	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = (*head);
	(*head) = new_node;
	return (*head);
}


/**
 * get_length - returns the length of a string
 * @str: string to determine the length of
 *
 * Return: length of @str
 */
unsigned int get_length(const char *str)
{
	unsigned int i, length = 0;

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
