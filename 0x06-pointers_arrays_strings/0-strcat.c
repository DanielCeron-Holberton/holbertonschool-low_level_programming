#include "main.h"
/**
 * _strcat - Print characters
 * @dest: Input string 1
 * @src: Input string 2
 * Return: Concatenated strings
 */

char *_strcat(char *dest, char *src)
{
int i;
char *destPointer = dest;
int len1 = 0;
int j;
for (i = 0; dest[i]; i++)
{
len1++;
destPointer++;
}
for (j = 0; src[j]; j++)
{
dest[len1] = src[j];
len1++;
}
return (dest);
}
