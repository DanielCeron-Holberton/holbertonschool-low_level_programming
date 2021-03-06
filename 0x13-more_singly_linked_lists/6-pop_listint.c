#include "lists.h"
/**
 * pop_listint - pick the int and destruct
 * the node
 *
 * @head:Entry header node
 * Return: int
 */
int pop_listint(listint_t **head)
{
	int i = 0;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = *head;
	*head = temp->next;
	i = temp->n;
	free(temp);

	return (i);
}
