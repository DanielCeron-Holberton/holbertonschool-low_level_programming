#include "main.h"
/**
 * print_line - Print a line in terminal
 *
 * @n: Input number of lines to print
 *
 */

void print_line(int n)
{
while (n > 0)
{
_putchar('_');
n--;
}
_putchar(10);
}
