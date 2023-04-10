#include "main.h"

/**
 * clear_bit - sets the value
 * of the bit to 0
 * @n: pointer of an unsigned long int
 * @index: this is the index of the bit
 *
 * Return: 1 if its works and -1 if it fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n ^= m;

	return (1);

}
