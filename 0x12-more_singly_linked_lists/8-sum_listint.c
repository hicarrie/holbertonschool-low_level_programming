#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of all data (n) of a listint_t list
 * @head: pointer to head of list
 * Return: sum of all data (n) of list or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum;

	if (head == NULL)
		return (0);

	current = head;
	sum = 0;

	while (current->next != NULL)
	{
		sum = sum + current->n;
		current = current->next;
	}
	sum = sum + current->n;

	return (sum);
}
