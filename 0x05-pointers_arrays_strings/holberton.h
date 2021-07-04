#ifndef _HOLBERTON_
#define _HOLBERTON_

/*Including libraries*/
#include <unistd.h>
#include <stdio.h>
/*_putchar function*/
int _putchar(char c);
/*Updates the value it points to to 98*/
void reset_to_98(int *n);
/*Swaps the values of two integers*/
void swap_int(int *a, int *b);
/*Returns the length of a string*/
int _strlen(char *s);
/*prints a string, followed by a new line*/
void _puts(char *str);
/* prints a string, in reverse, followed by a new line.*/
void print_rev(char *s);


#endif /* _HOLBERTON_ */