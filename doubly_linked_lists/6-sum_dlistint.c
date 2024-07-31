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
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	
	return (sum);
}

