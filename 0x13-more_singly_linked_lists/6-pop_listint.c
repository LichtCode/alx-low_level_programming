#include "lists.h"

/**
 * pop_listint - this function deletes the head node of the linked list
 * @head: a pointer to the first element in the linked list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *dummy;
	int numb;

	if (!head || !*head)
		return (0);

	numb = (*head)->n;
	dummy = (*head)->next;
	free(*head);
	*head = dummy;

	return (numb);
}
