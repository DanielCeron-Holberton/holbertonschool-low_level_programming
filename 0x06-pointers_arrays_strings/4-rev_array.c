#include "main.h"
/**
 * reverse_array - Reverse an array
 * @a: Input string
 * @n: # of elements
 */

void reverse_array(int *a, int n)
{
	int j = 0;
	int i = n - 1;
	int k = 0;
	int newArray[100];

	for (; i >= 0; i--)
	{
		newArray[i] = a[j];
		j++;
	}

	while (k < n)
	{
		a[k] = newArray[k];
		k++;
	}
}
