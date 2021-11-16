#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node
 *
 * @head: entry head list
 * @index: position of the node to delete
 * Return: int
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *temp2 = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);


	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	for (; temp != NULL && i < index - 1; i++)
		temp = temp->next;


	if (temp == NULL || temp->next == NULL)
		return (-1);


	temp2 = temp->next->next;


	free(temp->next);

	temp->next = temp2;
	return (1);
}
