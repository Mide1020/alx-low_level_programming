#include "lists.h"

/**
 * add_nodeint_end - add node at the end 
 * @head: point to the first element
 * @n: insert new element
 *
 * Return: pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *latest;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!latest)
		return (NULL);

	latest->n = n;
	latest->next = NULL;

	if (*head == NULL)
	{
		*head = latest;
		return (latest);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = latest;

	return (latest);
}
