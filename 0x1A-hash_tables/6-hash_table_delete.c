#include "hash_tables.h"


/**
 * hash_table_delete - Deletes a Hash table 
 * 
 * @ht: Input hash table to delete 
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;

	for (i = 0; i <= ht->size; i++)
	{
		while (ht->array[i]->next)
		{
			temp = ht->array[i];
			ht->array[i] = ht->array[i]->next;
			free(temp);
		}
		free(ht->array[i]);
	}
	free(ht);
}