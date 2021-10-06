#include "main.h"
/**
 * main - print 98 fibonacci digits
 *
 * Return: 0
 *
 */


int main(void)
{
	int f1 = 1;
	int f2 = 1;
	int i = 0;
	int next = 0;

	for (i = 1; i <= 98; i++)
	{
		if (i < 97)
		{
			printf("%u, ", f2);
		}
		else
		{
			printf("%u", f2);
		}
		next = f1 + f2;
		f1 = f2;
		f2 = next;
	}
	putchar(10);
	return (0);
}
