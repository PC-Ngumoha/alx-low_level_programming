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
	hash_node_t *new;
	unsigned long int index;

	if (ht == NULL)
		return (0);
	if (key == NULL || value == NULL)
		return (0);
	if (ht->array == NULL)
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
		new->next = ht->array[index];
		ht->array[index] = new;
	}
	return (1);
}
