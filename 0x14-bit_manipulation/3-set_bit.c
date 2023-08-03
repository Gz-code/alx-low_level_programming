#include "main.h"

/**
 * set_bit - The code will set a bit at a given index to 1
 * @n: The pointer to the changed number
 * @index: index of the bit is set to 1
 *
 * Return: 1 success, -1 failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}




