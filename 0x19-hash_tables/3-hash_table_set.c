#include "hash_tables.h"

/**
 * hash_table_set - adds element to the hash table
 * @ht: hash table to add/update key to
 * @key: key, cannot be empty
 * @value: value associated with key, can be empty
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int index;
	char *key_copy = strdup(key);
	char *value_copy = strdup(value);

	if (key == NULL)
		return (EXIT_FAILURE);

	index = key_index(???);

	node = ht->array[index];

	node->key = key_copy;
	node->value = value_copy;

	return (EXIT_SUCCESS);
}
