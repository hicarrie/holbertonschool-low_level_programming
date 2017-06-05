#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to be deleted
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *head;
	hash_node_t *temp;
	unsigned int i;

	if (ht == NULL)
	        return;

	i = 0;
	while(i < ht->size)
	{
		head = ht->array[i];
		if (head != NULL)
		{
			while (head->next != NULL)
			{
				temp = head->next;
				free(head->key);
				free(head->value);
				free(head);
				head = temp;
				break;
			}
			free(head->key);
			free(head->value);
			free(head);
		}
		i++;
	}

	free(ht->array);
	free(ht);
}
