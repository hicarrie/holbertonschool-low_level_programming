#include "hash_tables.h"

/**
 * hash_table_create - creates and mallocs space for hash table
 * @size: size of the array
 * Return: pointer to new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	return (table);
}
