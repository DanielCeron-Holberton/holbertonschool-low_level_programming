#include "holberton.h"
/**
 * print_last_digit - Print the last digit
 *
 *
 * @num1: Input number
 *
 * Return: the last digit
 *
 */
int print_last_digit(int num1)
{
/*Declaring variables*/
int moduleNumber;
/*Module*/
moduleNumber = (num1 % 10);
/*Absolute converter*/
if (moduleNumber < 0)
{
moduleNumber = (moduleNumber * -1);
}
_putchar(moduleNumber + '0');
return (moduleNumber);
}
