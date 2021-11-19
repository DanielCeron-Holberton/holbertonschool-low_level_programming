#include "main.h"
/**
 * set_bit - Set the bit object
 *
 * @n: entry number
 * @index: index of the number
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);
	*n |= 1 << index;
	return (1);
}
