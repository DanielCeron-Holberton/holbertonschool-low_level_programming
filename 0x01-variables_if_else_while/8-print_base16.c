#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 *
 */
int main(void)
{
int numberASCII;
int letterASCII;
numberASCII = 48;
letterASCII = 97;
while (numberASCII < 58)
{
putchar(numberASCII);
numberASCII++;
}
while (letterASCII < 103)
{
putchar(letterASCII);
letterASCII++;
}
putchar(10);
return (0);
}
