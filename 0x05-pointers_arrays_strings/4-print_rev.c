#include "main.h"
/**
 * print_rev - Print a string in reverse
 * @str: Input string
 *
 */

void print_rev(char *str)
{
int i;
char *p = str;
int len = 0;

while (*p != '\0')
{
p++;
len++;
}
for (i = (len - 1); i >= 0; i--)
{
_putchar(str[i]);
}
_putchar(10);
}
