#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - reverses a listint_t list
 * @head: pointer to pointer of head of list
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tempNode = NULL;
	listint_t *nextNode;

	while (*head != NULL)
	{
		nextNode = (*head)->next;
		(*head)->next = tempNode;
		tempNode = *head;
		*head = nextNode;
	}
	*head = tempNode;

	return (*head);
}
