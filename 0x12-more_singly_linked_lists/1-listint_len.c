#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to head of list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *current;
	unsigned int n; /* counter for number of elements */

	current = h;
	n = 0;
	while (current != NULL)
	{
		current = current->next;
		n++;
	}

	return (n);
}
