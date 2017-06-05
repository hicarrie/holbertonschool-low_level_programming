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

	if (ht == NULL || key == NULL || value == NULL || strlen(key) == 0)
		return (EXIT_FAILURE);

	index = key_index((const unsigned char *)key, ht->size);

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (EXIT_FAILURE);

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	ht->array[index] = node;

	return (EXIT_SUCCESS);
}
