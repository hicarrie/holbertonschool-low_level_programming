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

	if (head == NULL)
		return (NULL);

	current = head;

	for (j = 0; current != NULL; j++)
		current = current->next; /* count number of nodes in list */

	if (index > j)
		exit (0); /* if index is bigger than list, exit */

	current = head; /* resets current to head */

	for (i = 0; i < index; i++)
		current = current->next; /* iterate to specified node */

	return (current);
}
