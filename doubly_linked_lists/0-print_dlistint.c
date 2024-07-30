#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - function that prints
 * @h: pointer to the struct
 * all the elements of a dlistint_t list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] (%s)\n", h->len, h->str);
		}
		if (h->next != NULL && h->prev == NULL)
		{
			h = h->next;
			count++;
		}
	}
	return (count);
}
