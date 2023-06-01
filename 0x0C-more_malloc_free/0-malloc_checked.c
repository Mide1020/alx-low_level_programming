#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - This is to allocates the memories using malloc.
 *@b: The numbers of the bytes to be  allocated
 *
 * Return: pointer to the allocated memories.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
