#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * main - prints the minimum number of coins to make change for money
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if successful, 1 if error occurs
 */
int main(int argc, char *argv[])
{
	int money, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	coins = 0;
	money = atoi(argv[1]);
	while (money > 0)
	{
		if (money >= 25)
		{
			coins++;
			money -= 25;
		}
		else if (money >= 10)
		{
			coins++;
			money -= 10;
		}
		else if (money >= 5)
		{
			coins++;
			money -= 5;
		}
		else if (money >= 2)
		{
			coins++;
			money -= 2;
		}
		else
		{
			coins++;
			money -= 1;
		}
	}
	printf("%d\n", coins);
	return (0);
}
