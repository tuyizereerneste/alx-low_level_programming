#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- function that Read text file and print to STDOUT.
 * @filename: text file being be read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 * and 0 when function fails or filename is NULL or
 * when it does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;

	ssize_t fd;

	ssize_t w;

	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	return (0);
	buffer = malloc(sizeof(char) * letters);
	t = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, t);
	free(buffer);
	close(fd);
	return (w);
}
