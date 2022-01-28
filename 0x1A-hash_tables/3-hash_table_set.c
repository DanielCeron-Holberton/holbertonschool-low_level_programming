#include "hash_tables.h"
/**
 * hash_table_set - set a new element in a hash table 
 * 
 * @ht: Input hash table
 * @key: Input key string
 * @value: Input value
 * Return: 1 in success 0 in error
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;
	hash_node_t *current;

	if (!key || strlen(key) == 0 || !ht || !value)
		return (0);

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (!ht->array[index])
		ht->array[index] = new_node;

	if (ht->array[index] != NULL)
	{
		current = ht->array[index];
		while (current)
		{
			if (strcmp(current->key, key) == 0)
			{
				current->value = strdup(value);
				return (1);
			}
			current = current->next;
		}
	}

	if (ht->array[index] != NULL)
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}

	return (1);
}
