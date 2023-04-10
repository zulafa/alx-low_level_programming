#include "main.h"
#include <stdio.h>

/**
 * *get_bit - tends to return the value of
 * any bit at any given index.
 * @n: unsigned long input.
 * @index:indicates the index
 *
 * Return: the value of the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index < 64)
		return (0);

	for (i = 0; i <= 63; n >>= 1, i++)
	{
		if (index == i)
		{
			return (n & 1);
		}
	}

	return (-1);

}
