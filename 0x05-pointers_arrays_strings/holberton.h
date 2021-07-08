#ifndef _HOLBERTON_
#define _HOLBERTON_

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
/*reverses a string.*/
void rev_string(char *s);
/*Prints character*/
void puts2(char *str);
/*prints half of a string*/
void puts_half(char *str);
/*function that prints n elements of an array of integers*/
void print_array(int *a, int n);
/*function that copies the string pointed to by src*/
char *_strcpy(char *dest, char *src);



#endif /* _HOLBERTON_ */
