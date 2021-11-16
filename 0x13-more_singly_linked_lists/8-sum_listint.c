#include "lists.h"
/**
 * sum_listint - sum all the values in
 * a linked list
 *
 * @head: Entry node head
 * Return: int
 */
int sum_listint(listint_t *head)
{
	int i = 0;

	while (head != NULL)
	{
		i += head->n;
		head = head->next;
	}

	return (i);
}
