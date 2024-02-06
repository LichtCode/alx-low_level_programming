#include "lists.h"

/**
 * free_listint - this function frees a linked list
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *dummy;

	while (head)
	{
		dummy = head->next;
		free(head);
		head = dummy;
	}
}
