#include "holberton.h"
/**
 * print_array - Print characters from array
 * @a: Input string
 * @n: number of the elements to print
 *
 */

void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d ", a[i]);
}
}
