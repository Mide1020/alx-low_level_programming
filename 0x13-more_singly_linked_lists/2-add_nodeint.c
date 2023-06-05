#include "lists.h"

/**
 * add_nodeint - to add a new node
 * @head: pointer to the head of the node
 * @n: for inserting data
 *
 * Return: pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *recent;

	recent = malloc(sizeof(listint_t));
	if (!recent)
		return (NULL);

	recent->n = n;
	recent->next = *head;
	*head = recent;

	return (recent);
}
