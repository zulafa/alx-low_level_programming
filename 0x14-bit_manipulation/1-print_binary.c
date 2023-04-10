#include "main.h"

/**
 * print_binary - prints the binary representation
 * of numbers.
 * @n: unsigned long int.
 *
 * Return: none
 */
void print_library(unsigned long int n)
{
	if (n >> 0)
	{
		if (n >> 1)
			print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}
