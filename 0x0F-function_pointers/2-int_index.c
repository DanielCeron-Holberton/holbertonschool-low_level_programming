#include "function_pointers.h"
/**
 * int_index - return the index of the number
 * located in array
 *
 * @array: Entry array
 * @size: size of the array
 * @cmp: comparator pointer to function
 * Return: Index if is located -1 if isn't
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
	{
		return (-1);
	}
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	else
		return (-1);
	return (-1);
}
