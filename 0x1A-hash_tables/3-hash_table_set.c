#include "hash_tables.h"

/**
 * create_node_pointer - create a pointer to a node
 * @key: key, string
 * @value: value, string
 *
 * Return: pointer newly created node
 */
hash_node_t *create_node_pointer(const char *key, const char *value)
{
	char *key_copy, *value_copy;
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);

	key_copy = strdup(key);
	if (key_copy == NULL)
	{
		free(node);
		return (NULL);
	}

	value_copy = strdup(value);
	if (value_copy == NULL)
	{
		free(node);
		free(key_copy);
		return (NULL);
	}

	node->key = key_copy;
	node->value = value_copy;
	node->next = NULL;

	return (node);

}


/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to the hash table
 * @key: key, string
 * @value: value, string
 *
 * Return: int 1 on success or 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;

	node = create_node_pointer(key, value);
	if (node == NULL)
		return (0);

	index = key_index((const unsigned char *)node->key, ht->size);

/*	node->next = ht->array[index];
*/
	ht->array[index] = node;


	return (1);
}
