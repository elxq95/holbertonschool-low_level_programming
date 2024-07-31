#include <st
dio.h>
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
	unsigned int current_index = 0; /*Use a different variable to keep  track of the current index */
	
	while (head != NULL)
	{
		if (current_index == index)
		{
			return (head); /**Return the node if the current index matches the given index */
		}
		head = head->next;
		current_index++;
	}
	return (NULL);
}
