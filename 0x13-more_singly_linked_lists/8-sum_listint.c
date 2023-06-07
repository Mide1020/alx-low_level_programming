#include "lists.h"

/**
 * sum_listint - calculating the sum
 * @head: the first node
 *
 * Return: result of the sum
 */
int sum_listint(listint_t *head)
{
	int add = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		add += tmp->n;
		tmp = tmp->next;
	}

	return (add);
}
