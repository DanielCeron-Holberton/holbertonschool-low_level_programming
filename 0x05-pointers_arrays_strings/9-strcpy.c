#include "holberton.h"
/**
 * _strcpy - Copy strings
 * @dest: Copy string location
 * @src: Input string
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] + 1; i++)
{
dest[i] = src[i];
}
return (dest);
}
