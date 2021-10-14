#include "main.h"
/**
 * cap_string - Capitalizes words
 * @str: Input string
 * Return: Char to uppercase
 */

char *cap_string(char *str)
{

	int i;
	int j;
	char specialChar[14] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
				'\"', '(', ')', '{', '}', '\0'};

	/*Go through input array*/
	for (; str[i]; i++)
	{

		for (j = 0; specialChar[j]; j++)
		{
			if (str[i] > 96 && str[i] < 123)
			{
				if (str[i - 1] == specialChar[j])
				{
					str[i] = str[i] - 32;
				}
				else if (str[0] == str[i] && i == 0)
				{
					str[i] = str[i] - 32;
				}
			}
		}
	}
	return (str);
}
