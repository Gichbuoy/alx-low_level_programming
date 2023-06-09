#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: The size of the hash table
 *
 * Return: pointer to hash table created,
 *	NULL if it fails.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int y;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (y = 0; y < size; y++)
		ht->array[y] = NULL;
	return (ht);
}
