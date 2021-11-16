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
	if (*head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	temp = *head;
	while (i < idx - 1 && temp != NULL)
	{
		temp = temp->next;
		i++;
	}

	new->n = n;
	new->next = temp->next;
	temp->next = new;

	return (new);
}