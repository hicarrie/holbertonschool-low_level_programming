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

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		return (NULL);

	return (ht->array[index]->value);
}
