#include "holberton.h"
/**
 * _strcmp - Compare two strings
 * @s1: Input string 1
 * @s2: Input string 2
 * Return: Value of the compare
 */
int _strcmp(char *s1, char *s2)
{
int compare;
char *pointers1 = s1;
char *pointers2 = s2;
compare = (*pointers1 - *pointers2);
return (compare);
}
