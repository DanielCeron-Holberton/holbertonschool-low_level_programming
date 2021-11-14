#include "lists.h"
/**
 * free_list - frees a linked list previosly
 * allocated in heap
 *
 * @head: entry head of the list
 */


void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = temp->next;
		free(temp->str);
		free(temp);
	}
}
