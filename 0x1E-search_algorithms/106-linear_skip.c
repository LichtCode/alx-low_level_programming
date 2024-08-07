#include "search_algos.h"

/**
 * linear_skip - Performs a linear skip search for a value in a
 * sorted singly linked list of integers.
 * @list: Pointer to the head of the linked list to search.
 * @value: The value to search for.
 *
 * Return: Returns a pointer to the node where the value is found.
 *         Returns NULL if the value is not found or if the head of
 *			the list is NULL.
 *
 * Description: Prints each value as it is compared during the search.
 *              Uses the square root of the list size as the skip step.
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node, *jump;

	if (list == NULL)
		return (NULL);

	for (node = jump = list; jump->next != NULL && jump->n < value;)
	{
		node = jump;
		if (jump->express != NULL)
		{
			jump = jump->express;
			printf("Value checked at index [%ld] = [%d]\n",
					jump->index, jump->n);
		}
		else
		{
			while (jump->next != NULL)
				jump = jump->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, jump->index);

	for (; node->index < jump->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
