#include "holberton.h"
/**
 * puts2 - Print characters
 * @str: Input string
 *
 */

void puts2(char *str)
{
for (int i = 0; str[i]; i++)
{
if(i % 2 == 0)
{
putchar(str[i]);
}
}
}
