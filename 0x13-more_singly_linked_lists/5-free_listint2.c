#include "lists.h"

/**
 * free_listint2 - freeing up a linked list
 * @head: pointer of the list tat should be freed up
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	*head = NULL;
}
