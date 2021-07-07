#include "holberton.h"
/**
 * rev_string - Print an input string in reverse
 * @s: Input string
 *
 */

void rev_string(char *s)
{
/*Declare vars*/
char *begin = s;
char temp;
/*Setting pointer at the last letter*/
while (*s)
{
s++;
}
s--;
/*Loop "for" to change the letters*/
for (; s >= begin; s--)
{
temp = *begin;
*begin = *s;
*s = temp;
begin++;
}
}
