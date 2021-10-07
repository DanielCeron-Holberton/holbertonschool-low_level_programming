#include "main.h"
/**
 * main - print 98 fibonacci digits
 *
 * Return: 0
 *
 */


int main(void)
{
	unsigned long int f1 = 0;
	unsigned long int f2 = 1;
	unsigned long int i = 0;
	unsigned long int next = 0;

	for (i = 1; i < 98; i++)
	{
		if (i < 97)
		{
			printf("%lu, ", f2);
		}
		else
		{
			printf("%lu", f2);
		}
		next = f1 + f2;
		f1 = f2;
		f2 = next;
	}
	putchar(10);
	return (0);
}
