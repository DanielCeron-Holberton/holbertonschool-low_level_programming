#ifndef MAIN_HEADER
#define MAIN_HEADER


#include <stdio.h>


/*Memset Function proto*/
char *_memset(char *s, char b, unsigned int n);
/*Print buffer function proto*/
void simple_print_buffer(char *buffer, unsigned int size);
/*Memcpy function proto*/
char *_memcpy(char *dest, char *src, unsigned int n);
/*Strchr Function proto*/
char *_strchr(char *s, char c);
/*strspn Function proto*/
unsigned int _strspn(char *s, char *accept);
/*strpbrk Function proto*/
char *_strpbrk(char *s, char *accept);
/*strstr Function Proto*/
char *_strstr(char *haystack, char *needle);
/*chessboard print*/
void print_chessboard(char (*a)[8]);
/*diagsums print*/
void print_diagsums(int *a, int size);


#endif /* MAIN_HEADER */