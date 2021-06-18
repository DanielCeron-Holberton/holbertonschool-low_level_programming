#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 *
 */
int main(void)
{
int letterLower;
letterLower = 97;
while (letterLower < 123)
{
if (letterLower == 101 || letterLower == 113)
{
letterLower++;
}
putchar(letterLower);
letterLower++;
}
putchar(10);
return (0);
}
