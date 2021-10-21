#include "main.h"

/**
 * _puts_recursion - Prints a string with recursion
 *
 *
 * @s: String to print
 *
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (*(s + i) == '\0')
	{
		putchar(10);
		return;
	}
	putchar(*(s + i));
	i++;
	_puts_recursion(s + i);
}
