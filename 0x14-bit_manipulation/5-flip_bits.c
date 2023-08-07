#include "main.h"

/**
 * flip_bits - The code will count the number of bits to change
 * it will get from one to another
 * @n: The 1st  number
 * @m: The 2nd  number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}


