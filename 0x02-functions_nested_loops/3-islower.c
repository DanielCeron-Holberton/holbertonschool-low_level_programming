#include "main.h"
/**
 * _islower - check lowercase character
 * @c: parameter for a character
 * Return: Should be 1 if is lowercase otherwise should be 0
 */


int _islower(int c)
{
if (c > 96 && c < 123)
{
return (1);
}
else
{
return (0);
}
}
