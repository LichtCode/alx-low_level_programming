#include "lists.h"

/**
 * sum_listint - the function calculates the sum of all data in a
 * listint_t list
 * @head: first node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *dummy = head;

	while (dummy)
	{
		sum += dummy->n;
		dummy = dummy->next;
	}

	return (sum);
}
