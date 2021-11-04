#include "3-calc.h"

/**
 * op_add - adds two integers
 *
 * @a: int a
 * @b: int b
 * Return: int
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - substract two integers
 *
 * @a: int a
 * @b: int b
 * Return: int
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies two integers
 *
 * @a: int a
 * @b: int b
 * Return: int
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide two integers
 *
 * @a: int a
 * @b: int b
 * Return: int
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - module of two integers
 *
 * @a: int a
 * @b: int b
 * Return: int
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
