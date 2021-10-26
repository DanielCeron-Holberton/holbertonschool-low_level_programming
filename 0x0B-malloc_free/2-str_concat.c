#include "main.h"

/**
 * _strlen - counts each character
 *
 * @s: entry string
 *
 * Return: Int # of characters
 *
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}

/**
 * str_concat - Concatenates two strings
 *
 * @s1: First string
 * @s2: Second string
 *
 * Return: Concatenated allocated string
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, sizeS1, sizeS2, sizeTotal = 0;
	char *resultConc;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	sizeS1 = _strlen(s1);
	sizeS2 = _strlen(s2);
	sizeTotal = sizeS1 + sizeS2;
	resultConc = (char *)malloc((sizeTotal + 1) * sizeof(char));
	if (resultConc == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < sizeS1; i++)
	{
		*(resultConc + i) = *(s1 + i);
	}
	for (j = 0; j < sizeTotal; j++, sizeS1++)
	{
		resultConc[sizeS1] = s2[j];
	}
	return (resultConc);
}
