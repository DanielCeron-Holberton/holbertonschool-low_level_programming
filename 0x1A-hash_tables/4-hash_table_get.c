#include "hash_tables.h"
/**
 * hash_table_get - Get the value for key in hash table
 *
 * @ht: Input hash table
 * @key: Input key string
 * Return: Value 
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	int index = key_index((unsigned char *)key, ht->size);

	if (!key || strlen(key) == 0 || !ht)
	{
		return (NULL);
	}

	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}

	return (NULL);
}
