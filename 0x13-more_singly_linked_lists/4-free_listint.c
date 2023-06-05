#include "lists.h"

/**
 * free_listint - free up the linked list
 * @head: list that are to be freed up
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}i
