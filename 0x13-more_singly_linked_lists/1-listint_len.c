#include "lists.h"

/**
 * listint_len - return  number of elements in a linked lists
 * @h:The code returns number of nodes`
 * Return:This will return  number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}

	return (number);
}


