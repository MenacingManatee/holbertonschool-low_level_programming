#include <stdio.h>

/**
 * startup_c - Prints a string before main is executed
 *
 * Return: void
 */
void startup_c(void) __attribute__((constructor));

void startup_c(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
