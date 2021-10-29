#ifndef MAIN_HEADER
#define MAIN_HEADER

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>


void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);

#endif /* MAIN_HEADER */
