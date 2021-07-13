#include "holberton.h"
/**
 * string_toupper - lower to uppercase
 * @str: Input string
 * Return: Char to uppercase
 */

char *string_toupper(char *str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] > 96 && str[i] < 123)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
