#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node on the position
 * indicated.
 *
 * @head: entry head node
 * @idx: index
 * @n: value for the new node
 * Return: addess
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	temp = *head;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	while (i < idx - 1)
	{
		temp = temp->next;
		if (temp == NULL)
		{
			free(new);
			return (NULL);
		}
		i++;
	}

	new->next = temp->next;
	temp->next = new;

	return (new);
}
