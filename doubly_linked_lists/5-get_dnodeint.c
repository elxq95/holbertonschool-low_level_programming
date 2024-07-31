#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - function that returns the nth node
 * of a dlist
 * @head: pointer to a struct element
 * @index: index
 * Return: NULL if node does not exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	index = 0;
	if (head != NULL)
	{
		head = head->next;
		index++;
		return(index);
	}
	else
		return (NULL);
}
