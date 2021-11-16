#include "lists.h"

/**
 * free_listint - frees an Int linked list 
 * 
 * @head:entry node
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
