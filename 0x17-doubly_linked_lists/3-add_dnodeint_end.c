#include "lists.h"
/**
 * add_dnodeint_end - adds node at the last position
 *
 * @head: head of the linked list
 * @n: new node value
 * Return: head of the linked list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *last;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	last = *head;
	if (*head == NULL)
		*head = new_node;
	else
	{
		while (last->next)
			last = last->next;
		last->next = new_node;
		new_node->prev = last;
	}
	return (*head);
}
