#include "lists.h"
/**
 * get_nodeint_at_index - Get the nodeint at index object
 *
 * @head: entry head list
 * @index: position to get data node
 * Return: listint_t*
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
		i++;
	}

	return (head);
}
