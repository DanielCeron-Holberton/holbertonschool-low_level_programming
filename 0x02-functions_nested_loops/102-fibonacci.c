#include "main.h"

/**
 * main - prints 50 numbers of fibonacci sequence
 *
 * Return: 0
 */

int main(void)
{
	long int f1 = 1;
	long int f2 = 1;
	long int i = 0;
	long int next = 0;

	for (i = 1; i < 50; i++)
	{
		if (i < 49)
		{
			printf("%ld, ", f2);
		}
		else
		{
			printf("%ld", f2);
		}
		next = f1 + f2;
		f1 = f2;
		f2 = next;
	}
	return (0);
}
