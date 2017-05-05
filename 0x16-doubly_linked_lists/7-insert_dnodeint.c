#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to head of list
 * @idx: index of new node
 * @n: data for new node
 * Return: address of new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current;
	dlistint_t *new;
	unsigned int i;

	current = *h;

	if (h == NULL)
		return (NULL);
	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && current != NULL; i++)
			current = current->next;
	}
	if (idx > i + 1)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;
		*h = new;
		return (new);
	}
	if (idx == i)
	{
		new->prev = current;
		new->next = NULL;
		current->next = new;
		return (new);
	}
	new->prev = current;
	new->next = current->next;
	current->next = new;
	return (new);
}
