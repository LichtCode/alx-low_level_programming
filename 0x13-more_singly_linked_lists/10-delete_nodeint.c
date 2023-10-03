#include "lists.h"

/**
 * delete_nodeint_at_index - this function deletes a node in
 * a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = NULL;
	unsigned int i = 0;
	listint_t *dummy = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(dummy);
		return (1);
	}

	while (i < index - 1)
	{
		if (!dummy || !(dummy->next))
			return (-1);
		dummy = dummy->next;
		i++;
	}


	current = dummy->next;
	dummy->next = current->next;
	free(current);

	return (1);
}
