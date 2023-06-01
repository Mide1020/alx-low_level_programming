#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocation of memories block.
 * @ptr: pointer to the memory 
 * @old_size: byte size of the allocated point
 * @new_size: new size of memory block
 *
 * Return: ptr.
 * new size and old size checking
 * return NULL, if there is a failure in malloc
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr =
			malloc(new_size);

	if (new_size == old_size)
		return (ptr);
	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
