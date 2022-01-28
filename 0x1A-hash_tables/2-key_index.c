#include "hash_tables.h"

/**
 * key_index - Finds the index where key has
 * to be located
 *
 * @key: key value to find index 
 * @size: size of table
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int temp;

	temp = hash_djb2(key) % size;

	return (temp);
}
