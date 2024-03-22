#include "lists.h"

/**
 * insert_dnodeint_at_index - the function inserts a new_n node at
 * a given position
 *
 * @h: the head_n of the list
 * @idx: the index of the new_n node
 * @n: the value of the new_n node
 * Return: the address of the new_n node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_n;
	dlistint_t *head_n;
	unsigned int i;

	new_n = NULL;
	if (idx == 0)
		new_n = add_dnodeint(h, n);
	else
	{
		head_n = *h;
		i = 1;
		if (head_n != NULL)
			while (head_n->prev != NULL)
				head_n = head_n->prev;
		while (head_n != NULL)
		{
			if (i == idx)
			{
				if (head_n->next == NULL)
					new_n = add_dnodeint_end(h, n);
				else
				{
					new_n = malloc(sizeof(dlistint_t));
					if (new_n != NULL)
					{
						new_n->n = n;
						new_n->next = head_n->next;
						new_n->prev = head_n;
						head_n->next->prev = new_n;
						head_n->next = new_n;
					}
				}
				break;
			}
			head_n = head_n->next;
			i++;
		}
	}

	return (new_n);
}
