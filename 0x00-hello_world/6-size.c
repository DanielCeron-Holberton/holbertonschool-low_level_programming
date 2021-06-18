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
printf("Size of a char: %ld byte(s)\n", sizeof(charType));
printf("Size of an int: %ld byte(s)\n", sizeof(integerType));
printf("Size of a long int: %ld byte(s)\n", sizeof(longIntegerType));
printf("Size of a long long int: %ld byte(s)\n", sizeof(LonglongIntegerType));
printf("Size of a float: %ld byte(s)\n", sizeof(floatType));
return (0);
}
