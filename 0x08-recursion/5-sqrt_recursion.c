#include "main.h"
/**
 * _sqrt_recursion - finds the square root of a
 * natural number
 * @n : entry number
 * Return: int
 */

int _sqrt_recursion(int n)
{
	int i = 1;

	if (n == 0)
	{
		return (n);
	}

	return (sqrt_proc(i, n));
}

/**
 * sqrt_proc - finds the closer power base to number
 *
 * @base: base #
 * @n: entry number
 * Return: int
 */
int sqrt_proc(int base, int n)
{
	if (base * base == n)
	{
		return (base);
	}
	if (base * base > n)
	{
		return (-1);
	}

	return (sqrt_proc(base + 1, n));
}
