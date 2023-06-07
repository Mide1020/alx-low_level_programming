#include "lists.h"

/**
 * reverse_listint - for reversal
 * @head: pointer
 *
 * Return: pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *recent = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = recent;
		recent = *head;
		*head = next;
	}

	*head = recent;

	return (*head);
}
