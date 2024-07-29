#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - function that
 * returns the number of elements in a linked list_t
 * @h : pointer to a struct
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
