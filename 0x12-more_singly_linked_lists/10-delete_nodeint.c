#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t list
 * @head: pointer to pointer of head of list
 * @index: index of node to be deleted
 * Return: 1 if succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		pop_listint(head);
		return (1);
	}

	current = *head;

	for (i = 0; i < index - 1; i++)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
	}

	temp = current->next;
	current->next = temp->next;

	free(temp);

	return (1);
}

/**
 * pop_listint - deletes the head node of a listint_t list and returns the head
 * node's data (n)
 * @head: pointer to pointer to head of list
 * Return: head node's data or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;

	temp = (*head)->next;
	free(*head);

	if (temp == NULL)
		return (-1);

	*head = temp;
	return ((*head)->n);
}
