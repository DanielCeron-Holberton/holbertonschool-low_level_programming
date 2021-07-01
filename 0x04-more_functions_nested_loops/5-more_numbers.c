#include "holberton.h"
/**
 * more_numbers - print numbers 1-14 10 times
 */
void more_numbers(void)
{
int num14 = 0;
int i;
for (i = 0; i < 10; i++)
{
while (num14 < 15)
{
if ((num14 / 10) != 0)
{
_putchar((num14 / 10) + '0');
}
_putchar((num14 % 10) + '0');
num14++;
}
_putchar(10);
num14 = 0;
}
}
