#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Inits a dog structure
 *
 * @d: entry structure
 * @name: 1st data
 * @age: 2nd data
 * @owner:3rd data
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{	
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
	/* (*d).name = name;*/
	/* (*d).age = age;*/
	/* (*d).owner = owner;*/
}
