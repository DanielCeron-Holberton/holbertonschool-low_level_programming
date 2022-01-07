#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node given index
 * 
 * @head: head of the list
 * @index: given index
 * Return: 1 if it succeeded 0 if it fails 
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{

	dlistint_t *current;
	unsigned int i = 0;

	if (*head == NULL || head == NULL)
		return (-1);

	current = *head;

	while (i < index)
	{

		if (current == NULL)
			return (-1);
		current = current->next;

		i++;
	}
	if (current == *head)
		*head = current->next;

	if (current->next != NULL)
		current->next->prev = current->prev;

	if (current->prev != NULL)
		current->prev->next = current->next;

	free(current);

	return (1);
}
