#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end
 * of the linked list
 *
 * @head: entry node head
 * @n:entry int
 * Return: list_t*
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newLast, *temp;

	newLast = malloc(sizeof(listint_t));
	if (newLast == NULL)
	{
		return (NULL);
	}
	newLast->n = n;
	newLast->next = NULL;
	if (*head == NULL)
	{
		*head = newLast;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newLast;
	}

	return (newLast);
}
