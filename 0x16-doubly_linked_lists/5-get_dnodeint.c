#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node of a dlistint_t linked list
 * @head: pointer to head of list
 * @index: index of node to be returned
 * Return: pointer to node or NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i, count;

	current = head;

	for (count = 0; head->next != NULL; count++)
		head = head->next;

	if (index > count)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
	}

	return (current);
}
