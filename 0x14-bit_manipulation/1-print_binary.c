#include "main.h"
/**
 * print_binary - print a decimal number in binary
 *
 * @n: Decimal number
 */

void print_binary(unsigned long int n)
{

	unsigned long int temp = n;
	int size = 0;

	while (temp > 0)
	{
		temp >>= 1;
		size++;
	}
	size--;

	if (size < 0)
		putchar('0');

	while (size >= 0)
	{
		if ((n >> size) & 1)
			putchar('1');
		else
			putchar('0');
		size--;
	}
}
