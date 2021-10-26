#include "main.h"

/**
 * create_array - Create a new array
 * @size: Size of the array
 * @c: Input char
 * Return: Null if size is 0, New Array if the sizes is 1 or more
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *newArray = (char *)malloc(size * sizeof(char));

	if (newArray == NULL)
	{
		return (NULL);
	}
	else if (size == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			newArray[i] = c;
		}
	}
	return (newArray);
}
