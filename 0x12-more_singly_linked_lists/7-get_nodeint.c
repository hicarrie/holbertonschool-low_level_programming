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
	unsigned int i;

	current = head;

	for (i = 0; i <= index - 1; i++)
	{
		current = current->next;
	}
	if (current == NULL)
		return (NULL);

	return (current);
}
