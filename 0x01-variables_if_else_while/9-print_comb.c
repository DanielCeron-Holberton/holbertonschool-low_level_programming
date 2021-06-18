#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 *
 */
int main(void)
{
int commaASCII;
int numberASCII;
int spacesASCII;
commaASCII = 44;
numberASCII = 48;
spacesASCII = 32;
while (numberASCII < 58)
{
putchar(numberASCII);
if (numberASCII < 57)
{
putchar(commaASCII);
putchar(spacesASCII);
}
numberASCII++;
}
putchar(10);
return (0);
}
