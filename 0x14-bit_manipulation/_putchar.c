#include "main.h"
#include <unistd.h>
/**
 * _putchar -THis function writes the character c to stdout
 * @c:  character to print out
 *
 * Return: success 1.
 *  -1 is returned, when the code encounters an error.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

