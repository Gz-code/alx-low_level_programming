#include "lists.h"

/**
 * free_listint - code frees a linked list
 * @head: included in directory folder
 * free_listint -The code frees a linked list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}


