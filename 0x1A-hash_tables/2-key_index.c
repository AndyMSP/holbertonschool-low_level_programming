#include "hash_tables.h"

/**
 * key_index - function converts the hash into an index
 * @key: key, string
 * @size: number of elements in hash table
 *
 * Return: index #
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index, hash;

	hash = hash_djb2(key);
	index = hash % size;

	return (index);
}
