#include "main.h"
/**
 * get_bit - Get the bit object
 *
 * @n: entry number
 * @index: position of bytes
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);

	if ((n >> index) & 1)
		return (1);
	else
		return (0);
}
