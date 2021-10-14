#include "main.h"
/**
 * leet - encode to 1337
 * @s: Input string
 * Return: Char to 1337
 */
char *leet(char *s)
{
	int i;
	int j;
	char styleEncode[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L', '\0'};
	char numbersEncode[] = {'4', '4', '3', '3',
	'0', '0', '7', '7', '1', '1', '\0'};

	for (i = 0; s[i]; i++)
	{
		for (j = 0; styleEncode[j]; j++)
		{
			if (s[i] == styleEncode[j])
			{
				s[i] = numbersEncode[j];
			}
		}
	}
	return (s);
}
