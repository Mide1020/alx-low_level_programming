#include "main.h"
#include <stdlib.h>
/**
 * array_range - create integer array.
 * @min: minimum value.
 * @max: maximum value.
 * Return: pointer 
 */
int *array_range(int min, int max)
{
	int *ar;
	int m;

	if (min > max)
		return (NULL);

	ar = malloc(sizeof(*ar) * ((max - min) + 1));

	if (ar == NULL)
		return (NULL);

	for (m = 0; min <= max;
			m++, min++)
		ar[m] = min;

	return (ar);
}
