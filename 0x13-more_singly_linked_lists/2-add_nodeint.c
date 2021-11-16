#include "lists.h"
/**
 * add_nodeint - add a new node in a linked list
 *
 * @head: head of the linked list as entry
 * @n: Entry int
 * Return: address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
