#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * sum_dlistint - function that returns
 * the sum of all the data (n) of a dlist
 * @head: pointer to a struct element
 * Return: 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	unsigned int sum, index = 0;

	for (head != NULL)
	{
		sum += head;
		return (sum);
	}
	head = head->next;
	return (0);
}

