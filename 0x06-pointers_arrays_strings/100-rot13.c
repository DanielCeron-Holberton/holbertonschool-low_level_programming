#include "main.h"
/**
 * rot13 - converts strings in to rot13 cipher
 *
 * @str: Input string
 * Return: output string
 */



char *rot13(char *str)
{
	char a[] = {"ABCDEFGHIJKLMabcdefghijklm"};

	char b[] = {"NOPQRSTUVWXYZnopqrstuvwxyz"};

	int i = 0, j = 0;

	for (; str[i]; i++)
	{
		for (j = 0; a[j]; j++)
		{
			if (str[i] == a[j])
			{
				str[i] = b[j];
			}
			else if (str[i] == b[j])
			{
				str[i] = a[j];
			}
		}
	}
	return (str);
}
