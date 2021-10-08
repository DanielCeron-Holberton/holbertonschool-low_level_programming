#include "main.h"
/**
 * print_diagonal - Print a line in diagonal terminal
 *
 * @n: Input number of diagonal lines to print
 *
 */
void print_diagonal(int n)
{
int x;
int y;
if (n <= 0)
{
_putchar(10);
}
else
{
for (x = 1; x <= n; x++)
{
for (y = 1; y <= n; y++)
{
if (x == y)
{
_putchar(92);
}
else if (x > y)
{
_putchar(' ');
}
}
_putchar(10);
}
}
}
