#include "hash_tables.h"

/**
 * hash_table_print - prints out the content of the hash table
 * @ht: hash table
 *
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *curr;
	unsigned long int i;
	int found = 0;

	printf("{");
	if (ht == NULL)
	{
		printf("}\n");
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		curr = ht->array[i];
		if (curr != NULL && found == 1)
			printf(", ");
		while (curr != NULL)
		{
			if (found == 0)
				found = 1;
			printf("\'%s\': \'%s\'", curr->key, curr->value);
			if (curr->next != NULL)
				printf(", ");
			curr = curr->next;
		}
	}
	printf("}\n");
}
