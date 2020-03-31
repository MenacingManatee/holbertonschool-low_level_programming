#include "holberton.h"
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX stdout.
 * @filename: filename to look for
 * @letters: Number of letters to read/print
 *
 * Return: 0 on failure, number of letters read/printed otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filedesc, bufflen;
	char *buff;

	if (filename == NULL || letters == 0)
		return (0);
	filedesc = open(filename, O_RDONLY);
	if (filedesc < 0)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);
	bufflen = read(filedesc, &buff[0], letters);
	bufflen = write(1, buff, bufflen);
	free(buff);
	close(filedesc);
	return (bufflen);
}
