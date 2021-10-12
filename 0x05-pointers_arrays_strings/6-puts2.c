#include "main.h"
/**
 * puts2 - Print characters
 * @str: Input string
 *
 */

void puts2(char *str)
{
int i;
for (i = 0; str[i]; i++)
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
}
_putchar(10);
}
