#include "main.h"

/**
 * _pow_recursion - Power of a number
 * @x: base
 * @y: power
 * Return: result
 *
 */

int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}

/**
 * binary_to_uint - binary to int
 *
 * @b: entry binary
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, j = 0;

	unsigned int size = strlen(b);

	for (; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		if (b[i] == '1')
		{
			j += (_pow_recursion(2, size - i)) / 2;
		}
	}
	return (j);
}
