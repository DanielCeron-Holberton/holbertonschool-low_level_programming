#include "main.h"

/**
 * _strcmp - Compare two strings
 * @s1: Input string 1
 * @s2: Input string 2
 * Return: Value of the compare
 */
int _strcmp(char *s1, char *s2)
{
	int compare = 0;
	int i = 0;

	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
		{
		compare = s1[i] - s2[i];
		break;
	}
	i++;
	}
	return (compare);
}
