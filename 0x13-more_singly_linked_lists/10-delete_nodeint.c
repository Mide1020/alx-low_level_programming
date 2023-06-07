#include "lists.h"

/**
 * delete_nodeint_at_index - deleting the node at an index
 * @head: pointer
 * @index: index to be deleted
 *
 * Return: 1 if it's success, else -1 if it's fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *present = NULL;
	unsigned int m = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (m < index - 1)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		tmp = tmp->next;
		m++;
	}


	present = tmp->next;
	tmp->next = present->next;
	free(present);

	return (1);
}
