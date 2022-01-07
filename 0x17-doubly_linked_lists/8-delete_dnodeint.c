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

	if (*head == NULL)
		return (-1);

	current = *head;

	while (i < index)
	{
		current = current->next;
		if (current == NULL)
			return (-1);
		i++;
	}
	if (current == *head)
		*head = current->next;

	if (current->next != NULL)
		current->next->prev = current->prev;

	return (1);
}