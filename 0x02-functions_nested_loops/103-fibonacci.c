#include "main.h"
/**
 * main - print the sum of fibonacci sequence
 *
 * Return: 0
 */

int main(void)
{
	int f1 = 1;
	int f2 = 1;
	int result = 0;

	while (f1 < 4000000)
	{
		f1 += f2;
		f2 = f1 - f2;
		if (f1 % 2 == 0)
		{
			result += f1;
		}
	}
	printf("%d", result);
	return (0);
}
