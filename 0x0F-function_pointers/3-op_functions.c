#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - adds two ints
 * @a: number 1
 * @b: number 2
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns the difference of a and b
 * @a: number 1
 * @b: number 2
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - returns the product of a and b
 * @a: number 1
 * @b: number 2
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns the division result of a and b
 * @a: number 1
 * @b: number 2
 *
 * Return: a / b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - eturns the modulus result of a and b
 * @a: number 1
 * @b: number 2
 *
 * Return: a % b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
