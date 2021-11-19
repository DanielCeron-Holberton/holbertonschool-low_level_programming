#include "main.h"
/**
 * clear_bit - Cleans a bit
 *
 * @n: entry number
 * @index: specific bit index to clear
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
