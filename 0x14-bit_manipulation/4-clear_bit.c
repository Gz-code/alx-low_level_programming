#include "main.h"

/**
 * clear_bit -The code sets the value of a given bit to 0
 * @n: The pointer to changed number
 * @index:The  index of the bit to clear
 *
 * Return: 1  success, -1  failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}


