#include "search_algos.h"

/**
 * linear_search - linear search algorithm
 *
 * @array: Entry array
 * @size: Size of entry array
 * @value: Value to search for
 * Return: index
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int index = 0;

	if (!array)
		return (-1);
	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
