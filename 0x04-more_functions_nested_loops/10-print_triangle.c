#include "main.h"

/**
 * print_triangle - Prints a triangle of sqaures according parameter
 * @size: The size of the squares triangle
 * Return: empty
 */

void print_triangle(int size)
{
int x, y;

if (size > 0)
{
for (x = 1; x <= size; x++)
{
for (y = 1; y <= size; y++)
{
if (y <= size - x)
{
_putchar(' ');
}
else
{
_putchar('#');
}
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
