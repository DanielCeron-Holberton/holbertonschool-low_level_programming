#include "lists.h"
/**
 * sum_dlistint - sum a list
 *
 * @head: head of a linked list
 * Return: sum of all values
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
