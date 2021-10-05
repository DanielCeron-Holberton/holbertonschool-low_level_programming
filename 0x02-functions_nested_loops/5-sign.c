#include "main.h"
/**
 * print_sign - Checks and print the sign of the number
 *
 * @n: Input parameter for a number
 *
 * Return: Should be 1 if is positive, but if its 0 return 0,
 * otherwise returns -1
 */

int print_sign(int n)
{
if (n < 0)
{
_putchar('-');
return (-1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else
{
_putchar('+');
return (1);
}
}
