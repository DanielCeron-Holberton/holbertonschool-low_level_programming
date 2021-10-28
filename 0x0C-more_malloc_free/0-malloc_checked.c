#include "main.h"

/**
 * malloc_checked - allocates and checks the input data
 *
 * @b: bytes to allocate
 *
 */

void *malloc_checked(unsigned int b)
{
	void *allockedInt;

	allockedInt = malloc(b);

	if (allockedInt == NULL)
	{
		exit(98);
	}
	return (allockedInt);
}
