#include "function_pointers.h"
/**
 * array_iterator - prints an array based in other functions
 *
 * @array: entry array
 * @size: size of the array
 * @action: entry function to print
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
	else
		return;
}
