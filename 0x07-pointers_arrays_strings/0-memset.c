#include "main.h"


/**
 * _memset - fills n bytes of s
 * @s: entry array/string
 * @b: constant byte
 * @n: number of bytes
 *
 * Return: String/array returned after change
 */



char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{

		s[i] = b;
		i++;
	}
	return (s);
}
