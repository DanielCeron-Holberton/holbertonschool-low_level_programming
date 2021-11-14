#include "lists.h"
/**
 * add_node_end - adds a new node at the end
 * of the linked list
 *
 * @head: entry node head
 * @str: entry string
 * Return: list_t*
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newLast, *temp;

	newLast = malloc(sizeof(list_t));
	if (newLast == NULL)
	{
		return (NULL);
	}
	newLast->str = strdup(str);
	newLast->len = strlen(str);
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
