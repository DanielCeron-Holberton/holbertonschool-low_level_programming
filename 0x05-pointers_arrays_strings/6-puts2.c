#include "holberton.h"
/**
 * puts2 - Print characters
 * @str: Input string
 *
 */

void puts2(char *str)
{
int position;
while (*str)
{
position = *str;
if (position % 2 == 0)
{
_putchar(*str);
}
str++;
}
_putchar(10);
}
