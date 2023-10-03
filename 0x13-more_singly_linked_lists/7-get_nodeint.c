#include "lists.h"

/**
 * get_nodeint_at_index - the function returns the node at an index in a
 * linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *dummy = head;

	while (dummy && count < index)
	{
		dummy = dummy->next;
		count++;
	}

	return (dummy ? dummy : NULL);
}