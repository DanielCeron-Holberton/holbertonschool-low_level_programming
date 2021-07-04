#include "holberton.h"
/**
 * _puts - Print a string in stdout
 *
 * @str: Input string
 *
 */


void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar(10);
}
