#include "holberton.h"
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#define RWRWR (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
#define ERR ("Error: Can't close fd %d\n")
#define NOWRITE ("Error: Can't write to %s\n")
/**
 * main - reads a text file and prints it to the POSIX stdout.
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, bufflen, close_fr, close_to;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
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
		dprintf(STDERR_FILENO, NOWRITE, argv[2]);
		exit(99);
	}
	while ((bufflen = read(fd_from, buff, 1024)) > 0)
		if (write(fd_to, buff, bufflen) != bufflen)
		{
			dprintf(STDERR_FILENO, NOWRITE, argv[2]);
			exit(99);
		}
	close_fr = close(fd_from);
	close_to = close(fd_to);
	if (close_fr < 0 || close_to < 0)
	{
		if (close_fr < 0)
			dprintf(STDERR_FILENO, ERR, fd_from);
		if (close_to < 0)
			dprintf(STDERR_FILENO, ERR, fd_to);
		exit(100);
	}
	return (EXIT_SUCCESS);
}
