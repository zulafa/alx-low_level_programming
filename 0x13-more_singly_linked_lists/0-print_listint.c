#include "lists.h"

/**
 * print_listint - tends to print all the elements present in the list.
 * @h: head of a list.
 *
 * Return: returns the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
