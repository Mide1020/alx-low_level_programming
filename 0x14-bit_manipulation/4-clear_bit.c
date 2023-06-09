/**
 * clearing_bit - setting the value of the bit
 * @n: pointer of decimal we need to changed
 * @index: index for changing position
 * Return: if it work return 1, else return -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;
	unsigned int h;

	if (index > 64)
		return (-1);
	h = index;
	for (x = 1; h > 0; x *= 2, h--)
		;

	if ((*n >> index) & 1)
		*n -= x;

	return (1);
}
