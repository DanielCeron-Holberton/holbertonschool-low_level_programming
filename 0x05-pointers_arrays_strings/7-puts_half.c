#include "main.h"
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
	while (*str)
	{
		len++;
		str++;
	}
	str = p;
	for (i = 0; str[i]; i++)
	{
		if (len % 2 == 0)
		{
			n = len / 2;
			if (i >= n)
			{
				_putchar(str[i]);
			}
		}
		else if (len % 2 != 0)
		{
			n = (len - 1) / 2;
			if (i - 1 >= n)
			{
				_putchar(str[i]);
			}
		}
	}
	_putchar(10);
}
