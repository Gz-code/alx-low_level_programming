
#include "lists.h"

/**
 * add_nodeint -it adds a new node at the beginning of a linked list
 * @head: the pointer to the first elemen
 * @n: the data to insert
 * Return: The pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_n;

	new_n = malloc(sizeof(listint_t));
	if (!new_n)
		return (NULL);

	new_n->n = n;
	new_n->next = *head;
	*head = new_n;

	return (new_n);
}

