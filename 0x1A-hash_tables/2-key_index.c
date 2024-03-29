#include "hash_tables.h"
/**
 * key_index - function that guves index of a key
 * @key: hash key to find
 * @size: size of the array of hash table
 *
 * Return: index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
