#include "main.h"

/**
 * array_range - new array
 * @min:min
 * @max:max
 * Return: INT
 */

int *array_range(int min, int max)
{
	int *poin;
	int total, i;

	if (min > max)
		return (NULL);
	total = max - min + 1;
	poin = malloc(sizeof(int) * total);
	if (poin == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		*(poin + i) = min;
		min++;
	}
	return (poin);
}
