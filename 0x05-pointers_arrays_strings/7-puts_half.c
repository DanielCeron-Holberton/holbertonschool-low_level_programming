#include "holberton.h"
/**
 * puts_half - Print characters
 * @str: Input string
 *
 */

void puts_half(char *str)
{
int i;
int len = 0;
char *p = str;
int n;
while(*str)
{
len++;
str++;
}
str = p;
n = len/2;
for (i=0; str[i]; i++)
{
if (i >= n)
{
_putchar(str[i]);
}
}
_putchar(10); 
}
