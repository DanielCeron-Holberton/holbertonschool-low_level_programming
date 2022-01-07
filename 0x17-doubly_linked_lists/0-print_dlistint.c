#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
	int size_list = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		size_list++;
	}

	return (size_list);
}
