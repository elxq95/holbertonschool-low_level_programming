#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

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
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
