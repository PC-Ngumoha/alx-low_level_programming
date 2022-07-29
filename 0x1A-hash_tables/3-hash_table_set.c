#include "hash_tables.h"

/**
 * hash_table_set - adds data to a hash table
 * @ht: hash table.
 * @key: key to locate a slot on the hash table.
 * @value: value to save at that slot on the hash table.
 *
 * Return: 1 (Success) or 0 (Fail)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *curr, *replace;
	unsigned long int index;

	if (ht == NULL)
		return (0);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = (char *)key;
	new->value = (char *)value;
	new->next = NULL;
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new;
	}
	else
	{
		curr = ht->array[index];
		while (((curr->next)->key != new->key) && (curr->next != NULL))
			curr = curr->next;
		if ((curr->next)->key == new->key)
		{
			replace = curr->next;
			new->next = (curr->next)->next;
			curr->next = new;
			free(replace);
		}
		if (curr->next == NULL)
			curr->next = new;
	}
	return (1);
}
