#ifndef FUNCTIONS_HEADER
#define FUNCTIONS_HEADER

/*INCLUDE LIBRARIES*/
#include <stdio.h>

/*PROTOTYPES FUNCTIONS*/
void print_name(char *name, void (*f)(char *));
void print_name_as_is(char *name);
void print_name_uppercase(char *name);
void array_iterator(int *array, size_t size, void (*action)(int));
void print_elem(int elem);
void print_elem_hex(int elem);

#endif /*FUNCTIONS_HEADER*/
