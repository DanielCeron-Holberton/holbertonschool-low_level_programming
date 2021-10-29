#ifndef MAIN_HEADER
#define MAIN_HEADER

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

void simple_print_buffer(char *buffer, unsigned int size);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);

#endif /* MAIN_HEADER */
