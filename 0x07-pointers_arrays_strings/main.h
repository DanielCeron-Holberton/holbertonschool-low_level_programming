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

#endif /* MAIN_HEADER */