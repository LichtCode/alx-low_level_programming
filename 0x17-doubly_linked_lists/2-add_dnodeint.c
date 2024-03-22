#include "lists.h"

/**
 * add_dnodeint - function adds a new_n node at the
 * beginning of a dlistint_t list
 *
 * @head: the head of the list
 * @n: the value of the element
 * Return: the address of the new_n element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_n;
	dlistint_t *head_n;

	new_n = malloc(sizeof(dlistint_t));
	if (new_n == NULL)
		return (NULL);

	new_n->n = n;
	new_n->prev = NULL;
	head_n = *head;

	if (head_n != NULL)
	{
		while (head_n->prev != NULL)
			head_n = head_n->prev;
	}

	new_n->next = head_n;

	if (head_n != NULL)
		head_n->prev = new_n;

	*head = new_n;

	return (new_n);
}
