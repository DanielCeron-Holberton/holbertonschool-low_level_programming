#include "holberton.h"
/**
 * print_last_digit - Print the last digit
 *
 *
 * @n: Input number
 *
 * Return: the last digit
 *
 */

int print_last_digit(int n)
{
/*Declaring variables*/
int moduleNumber;
/*Absolute converter*/
if (n < 0)
{
n = n * -1;
}
/*Module*/
moduleNumber = (n % 10);
_putchar(moduleNumber + '0');
return (moduleNumber);
}
