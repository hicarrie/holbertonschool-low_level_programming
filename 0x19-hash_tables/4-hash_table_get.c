#include "hash_tables.h"

/**
 * hash_table_get - retrieves value associated with a key
 * @ht: hash table to find value
 * @key: key to find value of
 * Return: value or NULL if key can't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index]->value == NULL)
		return (NULL);

	return (ht->array[index]->value);
}
