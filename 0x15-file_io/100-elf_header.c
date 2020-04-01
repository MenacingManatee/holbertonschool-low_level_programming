#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <elf.h>


#define USAGE ("Usage: elf_header elf_filename\n")
#define N_ELF ("Error: File must be an ELF file\n")
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
	if (argc != 3 || argv == NULL)
	{
		printf(USAGE);
		exit(98);
	}
	return (0);
}
