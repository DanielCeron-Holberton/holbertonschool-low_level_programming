#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 *
 */
int main(void)
{
int letter;
letter = 122;
while (letter > 96)
{
putchar(letter);
letter--;
}
putchar(10);
return (0);
}
