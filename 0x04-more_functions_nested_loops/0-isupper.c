#include "main.h"
/**
 * _isupper - check uppercase character
 * @c: parameter for a character
 * Return: Should be 1 if is uppercase otherwise should be 0
 */

int _isupper(int c)
{
if (c > 64 && c < 91)
{
return (1);
}
else
{
return (0);
}
}
