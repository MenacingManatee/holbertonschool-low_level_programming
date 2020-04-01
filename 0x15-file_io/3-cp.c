#include "holberton.h"
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#define RWRWR (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
#define ERR ("Error: Can't close fd %d\n")
#define NOWRITE ("Error: Can't write to %s\n")
#define NOREAD ("Error: Can't read from file %s\n")
#define USAGE ("Usage: cp file_from file_to\n")
/**
 * main - reads a text file and prints it to the POSIX stdout.
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, bufflen;
	char buff[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from < 0)
		dprintf(STDERR_FILENO, NOREAD, argv[1]), exit(98);
	fd_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, RWRWR);
	if (fd_to < 0)
		dprintf(STDERR_FILENO, NOWRITE, argv[2]), exit(99);
	while ((bufflen = read(fd_from, buff, 1024)) > 0)
		if (write(fd_to, buff, bufflen) != bufflen)
		{
			dprintf(STDERR_FILENO, NOWRITE, argv[2]);
			exit(99);
		}
	if (bufflen < 0)
		dprintf(STDERR_FILENO, NOREAD, argv[1]), exit(98);
	if ((close(fd_from)) < 0)
		dprintf(STDERR_FILENO, ERR, fd_from), exit(100);
	if ((close(fd_to)) < 0)
		dprintf(STDERR_FILENO, ERR, fd_to), exit(100);
	return (EXIT_SUCCESS);
}
