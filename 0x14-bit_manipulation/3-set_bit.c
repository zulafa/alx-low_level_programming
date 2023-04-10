#include "main.h"

/**
 * set_bit- will set the value of bit
 * to 1.
 * @n: Pointer of a long unsigned int
 * @index: index of the bit.
 *
 * Return: 1 if it works, -1 if it doesnt
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);
}
