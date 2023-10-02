#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- IT Read text file print to STDOUT.
 * @filename: text file to be read
 * @letters: number of letters being read
 * Return: q- actual number of bytes that read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fo;
	ssize_t q;
	ssize_t l;

	fo = open(filename, O_RDONLY);
	if (fo == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	l = read(fo, buf, letters);
	q = write(STDOUT_FILENO, buf, l);

	free(buf);
	close(fo);
	return (q);
}
