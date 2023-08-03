#include "main.h"

/**
 * get_endianness -The code will check if a machine is small or big endian
 * Return: 0 for BIG, 1 for SMALL
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}

