#include <stdlib.h>
#include "lists.h"

/**
 * free_list - this frees a linked list in the command
 * @head: are the list_t list to be generally  freed
 */
void free_list(list_t *head)
{
	list_t *link;

	while (head)
	{
		link = head->next;
		free(head->str);
		free(head);
		head = link;
	}
}
