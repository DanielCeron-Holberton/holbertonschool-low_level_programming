#include "holberton.h"
/**
 * print_to_98 - Print until 98
 *
 * @n: Input number to begin count
 *
 */
void print_to_98(int n)
{
while (n != 98)
{
printf("%d", n);
printf(", ");
if (n < 98)
{
n++;
}
else
{
n--;
}
}
printf("%d", 98);
printf("\n");
}
