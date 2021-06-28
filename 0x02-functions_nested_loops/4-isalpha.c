#include "holberton.h"
/**
 * _isalpha - check uppercase character
 *
 * @c: Input parameter to enter a char
 * 
 * Return: Should be 1 if is uppercase otherwise should be 0
 */

int _isalpha(int c)
{
  if ((c > 64 && c < 91) || (c > 96 && c < 123))
  {
  return (1);
  }
  else
  {
  return (0);
  }
}
