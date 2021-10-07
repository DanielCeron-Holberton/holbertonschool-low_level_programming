#include "main.h"
/**
 * main - print 98 fibonacci digits
 *
 * Return: 0
 *
 */

int main(void)
{
	unsigned long int f2 = 1, i = 0, f1 = 0, sum = 0;

	for (i = 0; i < 87; i++)
	{
		if (i < 97)
		{
			printf("%lu, ", f2);
		}
		else
		{
			printf("%lu", f2);
		}
		sum = f1 + f2;
		f1 = f2;
		f2 = sum;
	}

	printf("\n");
	return (0);
}
