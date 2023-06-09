#include "main.h"
#include <stdio.h>
/**
 * get_bit - getting value of a bit
 * @index: index that start  from 0
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int h;

	if (index > 10)
		return (-1);

	h = n >> index;

	return (h & 1);
}
