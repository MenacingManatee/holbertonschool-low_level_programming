#include "holberton.h"

int checker(int num, int prime);
/**
 * is_prime_number - checks if input integer is prime
 * @n: number to check
 * Return: Always 0 (ok)
 */
int is_prime_number(int n)
{
	int x;

	if (n == 1 || -n == 1 || n == 0)
		return (0);
	x = checker(2, n);
	return(x);
}
int checker(int num, int prime)
{
	if (num * 2 > prime)
		return (1);
	if (prime % num == 0)
		return (0);
	return(checker(num + 1, prime));
}
