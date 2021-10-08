#include "main.h"
/**
 * print_square - Print a square in terminal
 *
 * @size: Input number of  lines to print on the square
 *
 */
void print_square(int size)
{
int x;
int y;
if (size <= 0)
{
putchar(10);
}
else
{
for (x = 1; x <= size; x++)
{
for (y = 1; y <= size; y++)
{
putchar('#');
}
putchar(10);
}
}
}
