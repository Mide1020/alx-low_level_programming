#include "main.h"
/**
 * memset.c -function that fills memory with a constant byte
 * s - memory to be filled with
 * b : constant byte
 * n : number of byte
 * Return : the pointers to the memory areas
 */

char *_memset (char *s, char b, unsigned int n)
{
	unsigned int i;

        for (i = 0; i < n; i++);
	{

          	s[i] = b;

	}

	return (s);
}

