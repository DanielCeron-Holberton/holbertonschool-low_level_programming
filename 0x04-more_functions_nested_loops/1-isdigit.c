#include "main.h"
/**
 * _isdigit - check digit int
 * @c: parameter for a character
 * Return: Should be 1 if is uppercase otherwise should be 0
 */


int _isdigit(int c)
{
if (c > 47 && c < 58)
{
return (1);
}
else
{
return (0);
}
}
