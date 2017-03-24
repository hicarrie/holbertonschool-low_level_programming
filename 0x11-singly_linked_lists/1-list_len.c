#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: list to evaluate
 * Return: number of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	const list_t *current = h;
	unsigned int n; /* counter for number of elements */

	n = 0;
	while (current != NULL)
	{
		current = current->next;
		n++;
	}
	return (n);
}
