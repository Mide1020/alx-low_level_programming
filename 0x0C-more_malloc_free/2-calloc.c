#include <stdlib.h>
#include "main.h"
/**
 * _calloc - To allocate memories of the array using malloc
 * @nmemb: for the numbers of the elements in the array
 * @size: for the sizes of elements of the array
 *
 * Return: Null.
 * pointer to memory that was allocated.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < (nmemb * size); x++)
	{
		*((char *)(p) + x) = 0;
	}
	return (p);
}
