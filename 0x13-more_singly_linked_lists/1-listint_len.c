#include "lists.h"

/**
 * listint_len - returing the num of elements
 * @h: linked list
 *
 * Return: num of nodes 
 */
size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}

	return (number);
}
