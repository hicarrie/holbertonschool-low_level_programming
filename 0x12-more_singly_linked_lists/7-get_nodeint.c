#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to head of list
 * @index: index of the node
 * Return: nth node or NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int i, j;

	current = head;

	for (j = 0; head != NULL; j++)
		head = head->next; /* count number of nodes in list */

	if (index > j)
		return (NULL); /* if index is bigger than list, return NULL */

	for (i = 0; i < index; i++)
	{
		if (current == NULL)
			return (NULL);
		current = current->next; /* iterate to specified node */
	}
	return (current);
}
