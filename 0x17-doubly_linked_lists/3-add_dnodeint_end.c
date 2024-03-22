#include "lists.h"

/**
 * add_dnodeint_end - function adds a new_n node at the end
 * of a dlistint_t list
 *
 * @head: the head of the list
 * @n: the value of the element
 * Return: the address of the new_n element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *head_n;
	dlistint_t *new_n;

	new_n = malloc(sizeof(dlistint_t));
	if (new_n == NULL)
		return (NULL);

	new_n->n = n;
	new_n->next = NULL;

	head_n = *head;

	if (head_n != NULL)
	{
		while (head_n->next != NULL)
			head_n = head_n->next;
		head_n->next = new_n;
	}
	else
	{
		*head = new_n;
	}

	new_n->prev = head_n;

	return (new_n);
}
