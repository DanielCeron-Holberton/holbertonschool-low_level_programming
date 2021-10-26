#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *
 * @str: input string
 *
 * Return: Returns null if string is not allocated or returns string allocated
 * in different mem location
 *
 */

char *_strdup(char *str)
{
	int size = 0;
	int i = 0;
	char *newString;

	if (str == NULL)
	{
		return (NULL);
	}

	for (size = 0; str[size]; size++)
	{
	}
	newString = (char *)malloc((size + 1) * sizeof(char));
	if (newString == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			newString[i] = str[i];
		}
	}

	return (newString);
}
