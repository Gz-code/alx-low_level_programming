#include "lists.h"

/**
 * pop_listint -The code deletes the head node of a linked list
 * Return:  deleted data 
 * or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
