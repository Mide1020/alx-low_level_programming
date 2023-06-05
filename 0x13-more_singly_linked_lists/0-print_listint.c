#include "lists.h"

/**
 * print_listint - prints element.
 * @h: linked list.
 *
 * Return: num of nodes form the singly linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t numbers = 0;

	while (h)
	{
		printf("%d\n", h->n);
		numbers++;
		h = h->next;
	}

	return (numbers);
}
