#include "lists.h"
/**
 * print_listint - Prints an int linked list
 *
 * @h: Entry node/head of the list
 * Return: size of the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
