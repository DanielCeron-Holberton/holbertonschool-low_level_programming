#include "hash_tables.h"

/**
 * free_hash_list - frees a node
 *
 * @node: Input node.
 */
void free_hash_list(hash_node_t *node)
{
	if (!node)
		return;
	free_hash_list(node->next);
	free(node->key);
	free(node->value);
	free(node);
}

/**
 * hash_table_delete - Deletes a Hash table
 *
 * @ht: Input hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
		free_hash_list(ht->array[i]);
	free(ht->array);
	free(ht);
}


