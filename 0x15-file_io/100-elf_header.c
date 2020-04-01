#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <elf.h>


#define USAGE ("Usage: elf_header elf_filename\n")
#define N_ELF ("Error: File must be an ELF file\n")
#define N_OPEN ("Error: Cannot open file %s\n")
#define N_READ ("Error: Cannor read from file %s\n")
#define N_CLOSE ("Error: Unable to close file descriptor %d\n")

void print_magic(Elf64_Ehdr *ehdr64);
/**
 * main - displays the information contained in the ELF header
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (ok)
 */
int main(int argc, char *argv[])
{
	int fd, b;
	Elf64_Ehdr head;

	if (argc != 2 || argv == NULL)
		dprintf(STDERR_FILENO, USAGE), exit(98);
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
		dprintf(STDERR_FILENO, N_OPEN, argv[1]), exit(98);
	b = read(fd, &head, sizeof(head));
	if (b < 1)
		dprintf(STDERR_FILENO, N_READ, argv[1]), exit(98);

	/*Function call go here*/

	if (close(fd))
		dprintf(STDERR_FILENO, N_CLOSE, fd), exit(98);
	return (EXIT_SUCCESS);
}
