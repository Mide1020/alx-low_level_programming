#include "lists.h"

/**
 * sum_listint - calculating the sum
 * @head: first node
 *
 * Return: result sum
 */
int sum_listint(listint_t *head)
{
	int add = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		num += tmp->n;
		tmp = tmp->next;
	}

	return (add);
}
