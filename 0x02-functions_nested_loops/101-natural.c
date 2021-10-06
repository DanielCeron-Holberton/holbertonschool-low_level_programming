#include "main.h"
/**
 * main - Prints the multiples addition for 3 and 5 below 1024
 *
 *
 *
 * Return: 0
 */
int main(void)
{
	int a = 0;
	int b = 0;
	int result;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0)
		{
			a = a + i;
		}
		else if ((i % 5) == 0 && (i % 3) != 0)
		{
			b = i + b;
		}
	}
	result = a + b;
	printf("%d\n", result);

	return (0);
}
