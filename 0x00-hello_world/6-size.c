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
printf("Size of char: %ld byte(s)\n", sizeof(charType));
printf("Size of int: %ld byte(s)\n", sizeof(integerType));
printf("Size of long int: %ld byte(s)\n", sizeof(longIntegerType));
printf("Size of long long int: %ld byte(s)\n", sizeof(LonglongIntegerType));
printf("Size of float: %ld byte(s)\n", sizeof(floatType));
return (0);
}
