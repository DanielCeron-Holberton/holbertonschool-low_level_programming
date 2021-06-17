#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int integerType;
float floatType;
long int longIntegerType;
long long int LonglongIntegerType;
char charType;
printf("Size of char: %ld byte\n", sizeof(charType));
printf("Size of int: %ld bytes\n", sizeof(integerType));
printf("Size of long int: %ld bytes\n", sizeof(longIntegerType));
printf("Size of long long int: %ld bytes\n", sizeof(LonglongIntegerType));
printf("Size of float: %ld bytes\n", sizeof(floatType));
return (0);
}
