#include "lists.h"

/**
 * sum_dlistint - returns sum of all data (n) of a dlistint_t linked list
 * @head: pointer to head of list
 * Return: sum of all data in list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
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
