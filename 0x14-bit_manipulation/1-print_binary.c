#include "main.h"
#include <stdio.h>

/**
 * print_binary - printing binary rep of a number
 * @n: print out the decimals
 */
void print_binary(unsigned long int n)
{
	unsigned long int tmp;
	int x;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (tmp = n, x = 0; (tmp >>= 1) > 0; x++)
		;

	for (; x >= 0; x--)
	{
		if ((n >> x) & 1)
			printf("1");
		else
			printf("0");
	}
}
