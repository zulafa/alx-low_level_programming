#include "main.h"
#include <stdio.h>

/**
 * get_bit - this is a function that will return the
 * value of a bit at a given index.
 * @n: rep the unsigned long int input.
 * @index: rep the index of the bit.
 *
 * Return: rep the value of the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int j;

	if (n == 0 && index < 64)
		return (0);

	for (j = 0; j <= 63; n >>= 1, j++)
	{
		if (index == j)
		{
			return (n & 1);
		}
	}

	return (-1);
}
