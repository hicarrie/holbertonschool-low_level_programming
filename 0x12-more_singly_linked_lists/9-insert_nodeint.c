#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to pointer to head of list
 * @idx: index of the list where new node is added
 * @n: int to be added to new node
 * Return: address of new node or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current;
	listint_t *new;
	unsigned int i;

	current = *head;

	for (i = 0; i < idx - 1; i++)
		current = current->next;

	if (current == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = current->next;
	current->next = new;

	return (new);
}
