#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list and returns the head
 * node's data (n)
 * @head: pointer to pointer to head of list
 * Return: head node's data or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int temp;

	if (head == NULL)
		return (0);

	temp = (*head)->n;
	current = (*head)->next;
	free(*head);
	*head = current;
	return (temp);
}
