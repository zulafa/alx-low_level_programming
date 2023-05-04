#include "main.h"

/**
 * clear_bit - this is a function that sets the
 * value of a bit to 0 at a given index.
 * @n: rep the pointer of an unsigned long int.
 * @index: rep the index of the bit.
 *
 * Return: will return 1 if it worked, -1 if it doesnt.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int b;

	if (index > 63)
		return (-1);

	b = 1 << index;

	if (*n & b)
		*n ^= b;

	return (1);
}
