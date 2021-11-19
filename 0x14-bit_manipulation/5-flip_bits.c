#include "main.h"
/**
 * flip_bits - Counts
 *
 * @n: First number
 * @m: Second number
 * Return: unsigned int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int counter = 0;

	n = n ^ m;
	while (n > 0)
	{
		if (n & 1)
			counter++;
		n = n >> 1;
	}
	return (counter);
}
