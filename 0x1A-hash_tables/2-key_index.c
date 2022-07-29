#include "hash_tables.h"

/**
 * key_index - returns an index based on the hash value generated
 * @key: key passed into the hash function
 * @size: size of the hash table
 *
 * Return: index on the hash table where @key can be found
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (size <= 0)
		return (0);
	else
		return (hash_djb2(key) % size);
}
