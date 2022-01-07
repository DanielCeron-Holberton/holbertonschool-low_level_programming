#include "lists.h"
/**
 * print_dlistint - prints a new list
 *
 * @h: header of the linked list
 * Return: size of the double linked list
 */
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
