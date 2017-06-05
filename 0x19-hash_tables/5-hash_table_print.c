#include "hash_tables.h"

/**
 * hash_table_print - prints hash table
 * @ht: table to print
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned int count;
	unsigned int i;

	if (ht == NULL)
		return;

	count = 0;
	while (ht->array[count] != NULL)
	{
		current = ht->array[count];
		while (current != NULL)
			current = current->next;
		count++;
	}

	printf("{");

	i = 0;
	while (i < ht->size)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			printf("'%s': '%s'", current->key, current->value);
			current = current->next;
			if (i < count)
				printf(", ");
		}
		i++;
	}

	printf("}\n");
}
