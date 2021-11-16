#include "lists.h"

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 1;

	while (i < index)
	{
		head = head->next;
		i++;
	}

	if (head->next == NULL)
		return (NULL);

	return (head->next);
}
