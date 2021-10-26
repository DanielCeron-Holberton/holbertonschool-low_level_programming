#ifndef MAIN_HEADER
#define MAIN_HEADER

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


void simple_print_buffer(char *buffer, unsigned int size);
/*creates array of chars, and begins it with a specific char.*/
char *create_array(unsigned int size, char c);
/*returns a pointer to a newly allocated space in memory*/
char *_strdup(char *str);
/*function that concatenates two strings*/
char *str_concat(char *s1, char *s2);
/*returns a pointer to a 2 dimensional array of integers*/
int **alloc_grid(int width, int height);
/*frees a 2 dimensional grid*/
void free_grid(int **grid, int height);
/*Lenght of a string*/
int _strlen(char *s);




#endif /* MAIN_HEADER */