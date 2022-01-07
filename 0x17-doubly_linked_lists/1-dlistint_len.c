#include "lists.h"

size_t dlistint_len(const dlistint_t *h)
{
	int size_list = 0;

	while (h)
	{
		h = h->next;
		size_list++;
	}

	return (size_list);
}
