#ifndef MAIN_HEADER
#define MAIN_HEADER


#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <sys/types.h>
#include <string.h>


ssize_t read_textfile(const char *filename, size_t letters);



#endif /*MAIN_HEADER*/