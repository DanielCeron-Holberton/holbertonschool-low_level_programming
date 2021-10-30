#include "main.h"

/**
 * _realloc - reallocates space in memory and
 * frees the previosly allocated mem
 * @ptr: entry allocated pointer
 * @old_size: old size in bytes
 * @new_size: new size in bytes
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr2;
	int i = 0;
	if (old_size == new_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr2 = malloc(new_size);
	if (ptr2 == NULL)
	{
		return (NULL);
	}

	if (old_size < new_size && ptr != NULL)
	{
		for (i = 0; i <= old_size; i++)
		{
			*(ptr2 + i) = *((char *)ptr + i);
		}
	}
	free(ptr);

	return (ptr2);
}