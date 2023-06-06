#include "lists.h"

/**
 * pop_listint - deletes nodes
 * @head: the pointer of first element
 *
 * Return: the deleted data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int numbers;

	if (!head || !*head)
		return (0);

	numbers = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (numbers);
}
