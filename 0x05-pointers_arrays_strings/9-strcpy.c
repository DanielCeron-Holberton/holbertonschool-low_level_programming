#include "main.h"
/**
 * _strcpy - Copy strings
 * @dest: Copy string location
 * @src: Input string
 * Return: String copy location
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i]; i++)
{
dest[i] = src[i];
}
dest[i] = src[i];
return (dest);
}
