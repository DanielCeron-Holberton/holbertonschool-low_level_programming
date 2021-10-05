#include "main.h"
/**
 * print_alphabet - Print all alphabet
 *
 * Return: Should be 0
 */
void print_alphabet(void)
{
int letterLowerCase;
letterLowerCase = 97;
while (letterLowerCase < 123)
{
_putchar(letterLowerCase);
letterLowerCase++;
}
_putchar(10);
return;
}
