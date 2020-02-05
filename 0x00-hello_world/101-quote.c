#include <stdio.h>
#include <unistd.h>
#include <string.h>


/**
 * main - Uses fwrite (unistd.h) and strlen (string.h) to print to stderr
 * without using any version of print or puts
 * Return: always 1
 */
int main(void)
{
	char *dora = {"and that piece of art is useful\" - Dora Korpar, 2
015-10-19\n"};
	fwrite(dora, strlen(dora), 1, stderr);
	return (1);
}
