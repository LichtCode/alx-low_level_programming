#include "lists.h"

/**
 * print_listint - printout all the contents of a linked list
 * @h: linked list of the type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t numb = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h)
	{
		printf("%d\n", h->n);
		numb++;
		h = h->next;
	}

	return (numb);
}
