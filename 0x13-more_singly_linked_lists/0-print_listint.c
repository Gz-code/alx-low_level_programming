#include "lists.h"

/**
 * print_listint -Code will print all elements of the linked list
 *@h: Description: The code will  print all the elements of a linked list
 * Return: The nos of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		printf("%d\n", h->n);
		number++;
		h = h->next;
	}

	return (number);
}
