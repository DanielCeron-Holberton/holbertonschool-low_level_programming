#include "main.h"

/**
 * is_prime_number - Verify if the number is prime
 * @n: entry number
 * Return: 1 if is prime 0 if isn't
 */

int is_prime_number(int n)
{
	return (calc_prime(n, 2));
}

/**
 * calc_prime - iterates until find coincidence
 *
 * @n:entry number
 * @i: iterator
 * Return: 0 if is not prime 1 if is prime
 * recursion if none conditional is met
 */

int calc_prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n != 2 && n % i == 0)
	{
		return (0);
	}
	if (i > (n / 2))
	{
		return (1);
	}

	return (calc_prime(n, i + 1));
}
