#include "hash_tables.h"

/**
 * hash_table_print - Prints a table
 *
 * @ht: Input table to print
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int i;
	int internal_counter = 0;

	if (!ht)
	{
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{

		current = ht->array[i];
		while (current)
		{
			if (internal_counter > 0)
				printf(", ");

			if (current->key)
			{
				printf("'%s': ", current->key);
				if (current->value)
					printf("'%s'", current->value);
			}
			internal_counter++;
			current = current->next;
		}
	}
	printf("}\n");
}
