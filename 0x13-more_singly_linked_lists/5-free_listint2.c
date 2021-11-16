#include "lists.h"

/**
 * free_listint2 -  frees and replaces the head with null
 * value
 * @head: Entry head of the linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		
	}
	temp = NULL;
}
