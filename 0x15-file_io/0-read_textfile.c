#include "main.h"
#include <stdlib.h>

/**
 *i read_textfile- Code reads text file and  prints to STDOUT.
 * @filename: the text file being read
 * @letters: the no.s of letters to be read
 * Return: w- the number of bytes read and printed out
 *        0 when the function fails || filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}

