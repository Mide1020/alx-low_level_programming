#include "lists.h"

/**
 * free_listint - this would free up the linked list
 * @head: list_t to get free
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
