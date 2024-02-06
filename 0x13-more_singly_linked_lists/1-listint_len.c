#include "lists.h"

/**
 * listint_len - a function that returns the number of the elements in a linked
 * @h: linked list of the type listint_t to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t numb = 0;

	while (h)
	{
		numb++;
		h = h->next;
	}

	return (numb);
}
