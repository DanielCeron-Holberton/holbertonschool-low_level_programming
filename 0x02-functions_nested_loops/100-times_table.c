#include "main.h"
/**
 * print_times_table - Print n times table
 * @n: Input number of times table
 */

void print_times_table(int n)
{
	int num1, num2;

	if (n >= 0 && n <= 15)
	{
		for (num1 = 0; num1 <= n; num1++)
		{
			for (num2 = 0; num2 <= n; num2++)
			{
				if ((num1 * num2) / 10 == 0)
				{
					if (num2 != 0)
					{
						putchar(' ');
						putchar(' ');
						putchar(' ');
					}
					putchar((num1 * num2) + '0');
				}
				else if ((num1 * num2) > 9 && (num1 * num2) < 100)
				{
					putchar(' ');
					putchar(' ');
					putchar(((num1 * num2) / 10) + '0');
					putchar(((num1 * num2) % 10) + '0');
				}
				else
				{
					putchar(' ');
					putchar(((num1 * num2) / 100) + '0');
					putchar(((num1 * num2 / 10) % 10) + '0');
					putchar(((num1 * num2) % 10) + '0');
				}
				if (num2 < n)
				{
					putchar(',');
				}
			}
			putchar(10);
		}
	}
}
