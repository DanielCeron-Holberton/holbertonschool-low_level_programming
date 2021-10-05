#include "main.h"
/**
 * print_alphabet_x10 - Print all alphabet 10 times
 *
 * Return: Should be 0
 */
void print_alphabet_x10(void)
{
int i;
int letterLowerCase;
letterLowerCase = 97;
for (i = 0; i < 10; i++)
{
while (letterLowerCase < 123)
{
_putchar(letterLowerCase);
letterLowerCase++;
}
letterLowerCase = 97;
_putchar(10);
}
}
