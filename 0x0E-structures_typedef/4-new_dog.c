#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - creates a new structure
 *
 * @name: 1st item
 * @age: 2nd item
 * @owner: 3rd item
 * Return: New structure / Dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *create_new_dog;
	int i = 0, j = 0;

	create_new_dog = malloc(sizeof(dog_t));
	if (create_new_dog == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
		;
	for (j = 0; owner[j]; j++)
		;
	if (name != NULL)
	{
		create_new_dog->name = malloc(sizeof(char) * i + 1);
		if (create_new_dog->name == NULL)
		{
			free(create_new_dog);
			return (NULL);
		}
		create_new_dog->name = name;
	}
	else
		create_new_dog->name = NULL;
	if (owner != NULL)
	{
		create_new_dog->owner = malloc(sizeof(char) * j + 1);
		if (create_new_dog->owner == NULL)
		{
			free(create_new_dog->name);
			free(create_new_dog);
			return (NULL);
		}
		create_new_dog->owner = owner;
	}
	else
	{
		create_new_dog->owner = NULL;
	}
	create_new_dog->age = age;

	return (create_new_dog);
}
