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
int letterUpper;
letterLower = 97;
letterUpper = 65;
while (letterLower < 123)
{
putchar(letterLower);
letterLower++;
}
while (letterUpper < 91)
{
putchar(letterUpper);
letterUpper++;
}
putchar(10);
return (0);
}
