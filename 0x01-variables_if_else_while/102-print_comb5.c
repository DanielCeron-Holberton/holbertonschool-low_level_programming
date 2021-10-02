#include <stdio.h>

/**
 * main - Prints combinations of two pairs of digits
 *
 * Return: Always 0
 *
 */
int main(void)
{

int i;
int j;
int k;
int l;

for (i = '0'; i <= '9'; i++)
{
for (j = '0'; j <= '9'; j++)
{
for (k = '0'; k <= '9'; k++)
{
for (l = '1'; l <= '9'; l++)
{
if (l > j)
{
putchar(i);
putchar(j);
putchar(' ');
putchar(k);
putchar(l);
if (i == '9' && j == '8' && k == '9' && l == '9')
{
putchar(10);
}
else
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
return (0);
}
