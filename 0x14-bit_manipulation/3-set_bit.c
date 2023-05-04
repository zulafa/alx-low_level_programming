#include "main.h"

/**
 * set_bit - this is a function that sets the value of
 * a bit to 1 at any given index.
 * @n: rep the pointer of an unsigned long int.
 * @index: rep the index of the bit.
 *
 * Return: will return 1 if it worked, and -1 if it doesnt work.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int h;

	if (index > 63)
		return (-1);

	h = 1 << index;
	*n = (*n | h);

	return (1);
}
