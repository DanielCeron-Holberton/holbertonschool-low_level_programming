#include "lists.h"
/**
 * add_node - add a new node in a linked list
 *
 * @head: head of the linked list as entry
 * @str: Entry string
 * Return: address of the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (*head);
}
