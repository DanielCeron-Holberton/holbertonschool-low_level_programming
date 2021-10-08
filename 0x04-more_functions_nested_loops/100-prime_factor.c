#include "main.h"

/**
 * main - prints the largest prime factor of the number
 *
 * Return: 0
 */

int main(void)
{
	long int num1 = 612852475143;
	long int div = 2;
	/*long int ans = 0;*/
	long int maxfact = 0;

	while (num1 != 0)
	{

		if (num1 % div != 0)
		{
			div = div + 1;
		}
		else
		{
			maxfact = num1;
			num1 = num1 / div;
			if (num1 == 1)
			{
				printf("%ld", maxfact);
				break;
			}
		}
	}

	putchar(10);
	return (0);
}
