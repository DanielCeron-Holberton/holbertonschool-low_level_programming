#include "main.h"

/**
 * main - prints 50 numbers of fibonacci sequence
 *
 * Return: 0
 */

int main(void)
{
	int f1 = 0;
	int f2 = 1;
	int i = 0;
	int next = 0;

	for (i = 1; i < 50; i++)
	{
		if (i < 49)
		{
			printf("%d, ", f2);
		}
		else
		{
			printf("%d", f2);
		}
		next = f1 + f2;
		f1 = f2;
		f2 = next;
		return (0);
	}
}
