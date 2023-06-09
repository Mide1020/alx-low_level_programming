#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flipping the  bits for converting num
 * @n: 1st num
 * @m: 2nd num
 * Return: amount of num that are to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int fun;
	int flip;

	fun = n ^ m;
	flip = 0;

	while (fun)
	{
		flip++;
		fun &= (fun - 1);
	}

	return (flip);
}
