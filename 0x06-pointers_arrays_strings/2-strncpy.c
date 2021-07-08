#include "holberton.h"
/**
 * _strncpy - Copy two strings
 * @dest: Input string 1
 * @src: Input string 2
 * @n: Number of bytes
 * Return: Concatenated strings
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	for (i = 0; i < n && src[i]; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
