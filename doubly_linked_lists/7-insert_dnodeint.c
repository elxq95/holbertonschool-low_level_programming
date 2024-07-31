#include <stdio.h>
#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * *insert_dnodeint_at_index - function that
 * inserts a new node at a given position
 * @h: pointer to a pointer
 * @idx: index of the list where the new
 * node should be added. Index starts at 0
 * @n: integer
 * Returns: the address of the new node, or NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int position = 0;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));
	
	temp = *h;
	while (temp != NULL && position < idx - 1)
	{
		temp = temp -> next;
		position++;
	}
	if (temp == NULL)
		return (NULL);

	if (temp->next == NULL)
		return (add_dnodeint_end(h,n));
	
	new_node = malloc(sizeof(dlistint_t));
        if (new_node == NULL)
        {
                return (NULL);
        }
        new_node->n = n;
	new_node->next = temp->next;
	new_node->prev = temp;

	if (temp->next != NULL)
	{
		temp->next->prev = new_node;
	}

	temp->next = new_node;

	return (new_node);
}
