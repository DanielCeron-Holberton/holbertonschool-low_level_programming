#include "main.h"

/**
 * _memcpy - copy n bytes of source
 * @dest: destiny array/string
 * @src: entry bytes/array/string
 * @n: number of bytes
 *
 * Return: String/array returned after change
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	char *p = dest; 

	unsigned int i = 0;

	while (i < n)
	{
		p[i] = src[i];
		i++;
	}

	return (p);
}