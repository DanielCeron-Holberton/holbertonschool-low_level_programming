#include "holberton.h"
/**
 * print_triangle - Print a inversed triangle in terminal
 *
 * @size: Input number of lines to print triangle
 *
 */

void print_triangle(int size)
{
int i;
int j;
if (size <= 0)
{
_putchar(10);
}
else
{
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size ; j++)
{
if (j >= size - (i - 1))
{
_putchar('#');
}
else
{
_putchar(' ');
}
}
_putchar(10);
}
}
}
