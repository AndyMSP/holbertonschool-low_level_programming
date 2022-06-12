#include "hash_tables.h"

/**
 * hash_table_create - create a hash table and return a pointer to the table
 * @size: number of elements in the table
 *
 * Return: pointer to hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	hash_node_t *hn;
	unsigned long int i;

	ht = malloc(sizeof(hash_table_t));
	ht->size = size;
	ht->array = malloc(size * sizeof(hn));

	for (i = 0; i < size; i++)
	{
		ht->array[i] = NULL;
	}

	return (ht);


}
