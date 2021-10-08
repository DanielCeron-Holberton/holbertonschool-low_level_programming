#ifndef MAIN_HEADER
#define MAIN_HEADER

/*Including libraries*/
#include <unistd.h>
#include <stdio.h>
/*_putchar function*/
int _putchar(char c);
/*checks uppercase*/
int _isupper(int c);
/*Checks for a digit 0 - 9*/
int _isdigit(int c);
/*Multiplies 2 integers*/
int mul(int a, int b);
/*Print 0 - 9*/
void print_numbers(void);
/*Print 1-9 without 2 and 4*/
void print_most_numbers(void);
/*10 times numbers 0-14*/
void more_numbers(void);
/*Draws a straight line in the terminal*/
void print_line(int n);
/*Draws a diagonal line on the terminal*/
void print_diagonal(int n);
/*Prints a square*/
void print_square(int size);
/*Prints a triangle*/
void print_triangle(int size);


#endif /* MAIN_HEADER */
