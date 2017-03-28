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
	listint_t *next;
	int data;

	if (head == NULL || *head == NULL)
		return (0);

	data = (*head)->n; /* head node's data */
	next = (*head)->next; /* save next node's address */
	free(*head);
	*head = next; /* reassign next node to head */

	return (data);
}
