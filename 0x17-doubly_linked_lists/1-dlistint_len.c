#include "lists.h"
/**
 * dlistint_len - computes the size of a list
 *
 * @h: header of the linked list
 * Return: size of the double linked list
 */
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
