#include "hash_tables.h"

/**
 * hash_table_print - prints hash table
 * @ht: table to print
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned int i;

	if (ht == NULL)
	        return;

	printf("{");

	i = 0;
	while(i < ht->size)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			printf("'%s': '%s'", current->key, current->value);
			current = current->next;
			if (i != ht->size - 1)
				printf(", ");
		}
		i++;
	}

	printf("}\n");
}
