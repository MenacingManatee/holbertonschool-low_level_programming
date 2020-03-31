#include "holberton.h"
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#define RWRWR (S_IRUSR | S_IWUSR |S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - reads a text file and prints it to the POSIX stdout.
 * @filename: filename to look for
 * @letters: Number of letters to read/print
 *
 * Return: Always 0
 */
int main (int argc, char *argv[])
{
	int fd_from, fd_to, bufflen = 1, tmp;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from < 0)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, RWRWR);
	if (fd_to < 0)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (bufflen)
	{
		bufflen = read(fd_from, buff, 1024);
		if (bufflen > 0)
		{
			tmp += write(fd_to, buff, bufflen);
		}
	}
	return (tmp);
}