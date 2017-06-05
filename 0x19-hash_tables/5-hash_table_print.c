#include "hash_tables.h"

/**
 * hash_table_print - prints hash table
 * @ht: table to print
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned int num_elements;
	unsigned int count;
	unsigned int i;

	if (ht == NULL)
		return;

	i = 0;
	num_elements = 0;
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
			num_elements++;
		i++;
	}

	if (num_elements == 0)
		return;

	printf("{");

	i = 0;
	count = 1;
	while (i < ht->size)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			printf("'%s': '%s'", current->key, current->value);
			if (count < num_elements)
				printf(", ");
			current = current->next;
			count++;
		}
		i++;
	}
	if (count < 1)
		printf("}");
	printf("\n");
}
