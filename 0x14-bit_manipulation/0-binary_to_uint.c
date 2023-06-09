#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - conversion of binary num
 * @b: character
 * Return: conversion of decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum, p;
	int l;

	if (b == NULL)
		return (0);

	for (l = 0; b[l]; l++)
	{
		if (b[l] != '0' && b[l] != '1')
			return (0);
	}

	for (p = 1, total = 0, len--; len >= 0; len--, p *= 2)
	{
		if (b[len] == '1')
			sum += p;
	}

	return (sum);
}
