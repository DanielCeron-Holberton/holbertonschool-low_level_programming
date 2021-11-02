#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
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

	create_new_dog = malloc(sizeof(dog_t));
	if (create_new_dog == NULL)
	{
		return (NULL);
	}
	if (name != NULL)
	{
		create_new_dog->name = malloc(sizeof(char) * strlen(name));
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
		create_new_dog->owner = malloc(sizeof(char) * strlen(owner));
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
