#include "./hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table to print
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *new_node;
	unsigned long int y;
	unsigned char comma_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (y = 0; y < ht->size; y++)
	{
		if (ht->array[y] != NULL)
		{
			if (comma_flag == 1)
				printf(", ");

			new_node = ht->array[y];
			while (new_node != NULL)
			{
				printf("'%s': '%s'", new_node->key, new_node->value);
				new_node = new_node->next;
				if (new_node != NULL)
					printf(", ");
			}
			comma_flag = 1;
		}
	}
	printf("}\n");
}
