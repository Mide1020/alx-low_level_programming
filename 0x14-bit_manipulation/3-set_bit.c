#include "main.h"

/**
 * set_bit - setting the value of bit
 * @n: dec num
 * @index: position of the index
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;

	if (index > 10)
		return (-1);

	for (x = 1; index > 0; index--, x *= 2)
		;
	*n += x;

	return (1);
}
