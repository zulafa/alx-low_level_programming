#include "main.h"

/**
 * flip_bits - retuns the number of
 * bits need to be flipped.
 * @n: no.1
 * @m: no.2
 *
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbits;

	for (nbits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			nbits++;
	}

	return (nbits);
}
