#include "dog.h"
#include ""

/**
 * free_dog - Frees dogs structures
 * 
 * @d: Entry structure
 */


void free_dog(dog_t *d)
{
	if (d)
	{
	free(d->name);
	free(d->owner);
	free(d);
	}
}
