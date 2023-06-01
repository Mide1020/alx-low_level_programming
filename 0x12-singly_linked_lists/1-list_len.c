#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returning  numbers of elements list that is linked
 * @h: pointer
 *
 * Return: number of elements that are in h
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
