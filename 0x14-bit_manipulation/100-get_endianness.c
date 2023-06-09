#include "main.h"

/**
 * get_endianess -  for checking out the endianess
 * Return: return 0 if endiann is big else 1
 */
int get_endianness(void)
{
	int m;

	m = 1;
	if (*(char *)&m == 1)
		return (1);
	else
		return (0);
}

