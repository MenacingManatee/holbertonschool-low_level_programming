#include <stdio.h>
#include <unistd.h>
#include <string.h>


/**
 * main - Uses fwrite (unistd.h) and strlen (string.h) to print to stderr
 * without using any version of banned commands
 * Return: always 1
 */
int main(void)
{
	int l;
	l = sizeof("and that piece of art is useful - Dora Korpar, 2015-10-19");
	write(2,
	      "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
		l+1);
	return (1);
}
