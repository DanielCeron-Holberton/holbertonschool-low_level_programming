#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* _strlen - returns _strlen of string
*@s: a string
*Return: i
*/

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}

/**
* _strcopy - prints n elements of array
*@dest: string
*@src: string
*Return: dest
*/

char *_strcopy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];
	return (dest);
}

/**
 * new_dog - createds a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: new pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *create_new_poppy;
	char *ptr_name, *ptr_owner;

	create_new_poppy = malloc(sizeof(dog_t));
	if (create_new_poppy == NULL)
		return (NULL);

	create_new_poppy->age = age;

	if (name != NULL)
	{
		ptr_name = malloc(_strlen(name) + 1);
		if (ptr_name == NULL)
		{
			free(create_new_poppy);
			return (NULL);
		}
		create_new_poppy->name = _strcopy(ptr_name, name);
	}
	else
		create_new_poppy->name = NULL;

	if (owner != NULL)
	{
		ptr_owner = malloc(_strlen(owner) + 1);
		if (ptr_owner == NULL)
		{
			free(ptr_name);
			free(create_new_poppy);
			return (NULL);
		}
		create_new_poppy->owner = _strcopy(ptr_owner, owner);
	}
	else
		create_new_poppy->owner = NULL;

	return (create_new_poppy);
}
