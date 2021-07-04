#include "holberton.h"

/**
 * _strlen - Counts the lenght of string
 *
 *
 * @s: Input string
 *
 * Return: Returns the value of the lenght var
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
